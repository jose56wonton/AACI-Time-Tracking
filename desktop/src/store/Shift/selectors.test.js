import { shiftSelectors } from 'store/selectors';
import moment from 'moment';

describe(`Shift Selectors`, () => {
  test(`should have two basic selectors`, () => {
    shiftSelectors.getShiftsFromEntities({ entities: { shifts: {} } });
    shiftSelectors.getShiftsFromResults({ results: { shifts: [] } });
    shiftSelectors.getShiftFromState({ shift: {} });
  });
  test(`getCurrentShift should return null for results.length === 0`, () => {
    let returnedValue = shiftSelectors.getCurrentShift.resultFunc({}, [], null);
    expect(returnedValue).toBeNull();
    returnedValue = shiftSelectors.getCurrentShift.resultFunc({}, null, null);
    expect(returnedValue).toBeNull();
  });
  test(`getCurrentShift should return valid shift object for valid inputs`, () => {
    const returnedValue = shiftSelectors.getCurrentShift.resultFunc(
      { 1: { val: `asdf`, id: 1 } },
      [1],
      { current: { id: 1 } }
    );
    expect(returnedValue).toEqual({ id: 1, val: `asdf` });
  });
  test(`getShiftsInRange should return null for results.length === 0`, () => {
    let returnValue = shiftSelectors.getShiftsInRange.resultFunc(
      {}, // shift entities
      [], // shift results
      {}, // activity entities
      {}, // employee entities
      ``, // start
      `` // end
    );
    expect(returnValue).toBeNull();
    returnValue = shiftSelectors.getShiftsInRange.resultFunc(
      {}, // shift entities
      null, // shift results
      {}, // activity entities
      {}, // employee entities
      ``, // start
      `` // end
    );
    expect(returnValue).toBeNull();
  });
  test(`getShiftsInRange should return null for invalid start and end times`, () => {
    const returnValue = shiftSelectors.getShiftsInRange.resultFunc(
      { 1: { val: `asdf`, id: 1, activities: [1, 2], employeeId: 1 } }, // shift entities
      [1], // shift results
      { 1: { id: 1, val: `a` }, 2: { id: 2, val: `b` } }, // activity entities
      { 1: { id: 1, val: `josh` } }, // employee entities
      ``, // start
      `` // end
    );
    expect(returnValue).toEqual([]);
  });
  test(`getShiftsInRange should return [] with invalid start and end time`, () => {
    const returnValue = shiftSelectors.getShiftsInRange.resultFunc(
      {
        1: {
          val: `asdf`,
          id: 1,
          activities: [1, 2],
          employeeId: 1,
          clockInDate: moment().format(`MM-DD-YY HH:mm:ss`)
        }
      }, // shift entities
      [1], // shift results
      { 1: { id: 1, val: `a` }, 2: { id: 2, val: `b` } }, // activity entities
      { 1: { id: 1, val: `josh` } }, // employee entities
      moment()
        .add(1, `day`)
        .format(`MM-DD-YY HH:mm:ss`), // start
      moment()
        .subtract(1, `day`)
        .format(`MM-DD-YY HH:mm:ss`) // end
    );
    expect(returnValue).toEqual([]);
  });

  test(`getLastWeeksShiftsForCurrentEmployee should return shifts with correct employeeId from the last week`, () => {
    const currentMoment = moment().format(`MM-DD-YY HH:mm:ss`);
    const returnValue = shiftSelectors.getLastWeeksShiftsForCurrentEmployee.resultFunc(
      {
        1: {
          val: `asdf`,
          id: 1,
          activities: [1, 2],
          employeeId: 1,
          clockInDate: currentMoment
        }
      }, // shift entities
      [1], // shift results
      { 1: { id: 1, val: `a` }, 2: { id: 2, val: `b` } }, // activity entities
      { 1: { id: 1, val: `josh` } }, // employee entities
      { current: { id: 1 } }
    );
    expect(returnValue).toEqual([
      {
        val: `asdf`,
        id: 1,
        employeeId: 1,
        clockInDate: currentMoment,
        employee: { id: 1, val: `josh` },
        activities: [{ id: 1, val: `a` }, { id: 2, val: `b` }]
      }
    ]);
  });
  test(`getLastWeeksShiftsForCurrentEmployee should get no shifts if the employee doesn't have any in the last`, () => {
    const currentMoment = moment().format(`MM-DD-YY HH:mm:ss`);
    const returnValue = shiftSelectors.getLastWeeksShiftsForCurrentEmployee.resultFunc(
      {
        1: {
          val: `asdf`,
          id: 1,
          activities: [1, 2],
          employeeId: 1,
          clockInDate: currentMoment
        }
      }, // shift entities
      [1], // shift results
      { 1: { id: 1, val: `a` }, 2: { id: 2, val: `b` } }, // activity entities
      { 1: { id: 1, val: `josh` } }, // employee entities
      { current: { id: 2 } }
    );
    expect(returnValue).toEqual([]);
  });
  test(`getLastWeeksShiftsForCurrentEmployee should return [] if there are no shifts`, () => {
    const returnValue = shiftSelectors.getLastWeeksShiftsForCurrentEmployee.resultFunc(
      null, // shift entities
      [1], // shift results
      { 1: { id: 1, val: `a` }, 2: { id: 2, val: `b` } }, // activity entities
      { 1: { id: 1, val: `josh` } }, // employee entities
      { current: { id: 2 } }
    );
    expect(returnValue).toEqual([]);
  });
  test(`getShiftsInRange should return shifts with times between start and end time`, () => {
    const currentMoment = moment().format(`MM-DD-YY HH:mm:ss`);
    const returnValue = shiftSelectors.getShiftsInRange.resultFunc(
      {
        1: {
          val: `asdf`,
          id: 1,
          activities: [1, 2],
          employeeId: 1,
          clockInDate: currentMoment
        }
      }, // shift entities
      [1], // shift results
      { 1: { id: 1, val: `a` }, 2: { id: 2, val: `b` } }, // activity entities
      { 1: { id: 1, val: `josh` } }, // employee entities
      moment()
        .subtract(1, `day`)
        .format(`MM-DD-YY HH:mm:ss`), // start
      moment()
        .add(1, `day`)
        .format(`MM-DD-YY HH:mm:ss`) // end
    );
    expect(returnValue).toEqual([
      {
        val: `asdf`,
        id: 1,
        employeeId: 1,
        clockInDate: currentMoment,
        employee: { id: 1, val: `josh` },
        activities: [{ id: 1, val: `a` }, { id: 2, val: `b` }]
      }
    ]);
  });
  test(`getShiftInRange should get the startTime and endTime off of props`, () => {
    const currentMoment = moment().format(`MM-DD-YY HH:mm:ss`);
    shiftSelectors.getShiftsInRange(
      { entities: { shifts: {} }, results: { shifts: [] } },
      { startTime: currentMoment, endTime: currentMoment }
    );
  });

  test(`getSelectedShift should return {} fro no selected shift`, () => {
    const currentMoment = moment().format(`MM-DD-YY HH:mm:ss`);
    const returnValue = shiftSelectors.getSelectedShift.resultFunc(
      {
        1: {
          val: `asdf`,
          id: 1,
          activities: [1, 2],
          employeeId: 1,
          clockInDate: currentMoment
        }
      }, // shift entities
      { 1: { id: 1, val: `a` }, 2: { id: 2, val: `b` } }, // activity entities
      {}, // projectTask entities
      { 1: { id: 1, val: `josh` } }, // employee entities
      { shift: -1 }
    );
    expect(returnValue).toEqual({});
  });
  test(`getSelectedShift should return {} fro no selected shift`, () => {
    const currentMoment = moment().format(`MM-DD-YY HH:mm:ss`);
    const returnValue = shiftSelectors.getSelectedShift.resultFunc(
      {
        1: {
          val: `asdf`,
          id: 1,
          activities: [1, 2],
          employeeId: 1,
          clockInDate: currentMoment
        }
      }, // shift entities
      {
        1: { id: 1, val: `a`, projectTaskId: 1 },
        2: { id: 2, val: `b`, projectTaskId: 1 }
      }, // activity entities
      { 1: { val: `zzz` } }, // projectTask entities
      { 1: { id: 1, val: `josh` } }, // employee entities
      { shift: 1 }
    );
    expect(returnValue).toEqual({
      val: `asdf`,
      id: 1,
      employeeId: 1,
      clockInDate: currentMoment,
      employee: { id: 1, val: `josh` },
      activities: [
        { id: 1, val: `a`, projectTaskId: 1, projectTask: { val: `zzz` } },
        { id: 2, val: `b`, projectTaskId: 1, projectTask: { val: `zzz` } }
      ]
    });
  });
});
