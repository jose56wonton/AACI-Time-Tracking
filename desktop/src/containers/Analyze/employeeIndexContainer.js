import React, { Component } from 'react';
import PropTypes from 'prop-types';
import { connect } from 'react-redux';

import { employeeActions, analyzeActions } from 'store/actions';
import { employeeSelectors } from 'store/selectors';
import SortSelectTable from 'components/tables/SortSelect';
import Progress from 'components/helpers/Progress';
import * as TableDataTypes from 'constants/tableDataTypes';
import * as analyzeStatus from 'constants/analyze';

class EmployeeContainer extends Component {
  componentDidMount = () => {
    this.props.getEmployees();
  };
  render() {
    const { employees, selected, selectEmployee,setEmployeeStatus } = this.props;

    const isLoading = !employees;
    if (isLoading) {
      return <Progress variant="circular" fullPage />;
    }

    return (
      <SortSelectTable
        tableData={employees}
        headerData={rows}
        selected={selected}
        select={selectEmployee}
        add={() => {setEmployeeStatus(analyzeStatus.ADDING)}}
      />
    );
  }
}

const mapStateToProps = state => {
  return {
    employees: employeeSelectors.getAllEmployeesWithContents(state),
    selected: employeeSelectors.getSelectedEmployee(state)
  };
};

const mapDispatchToProps = dispatch => {
  return {
    getEmployees: () => {
      return dispatch(employeeActions.getEmployees());
    },
    selectEmployee: employee => {
      return dispatch(analyzeActions.selectEmployee(employee));
    },
    setEmployeeStatus: status => {
      return dispatch(analyzeActions.setEmployeeStatus(status));
    }
  };
};

EmployeeContainer.propTypes = {
  employees: PropTypes.array.isRequired,
  getEmployees: PropTypes.func.isRequired
};

export default connect(
  mapStateToProps,
  mapDispatchToProps
)(EmployeeContainer);

const rows = [
  {
    id: 'firstName',
    numeric: false,
    disablePadding: false,
    label: 'First Name',
    type: TableDataTypes.STRING
  },
  {
    id: 'lastName',
    numeric: false,
    disablePadding: false,
    label: 'Last Name',
    type: TableDataTypes.STRING
  },
  {
    id: 'authority',
    numeric: false,
    disablePadding: false,
    label: 'Authority',
    type: TableDataTypes.OBJECT,
    key: 'type'
  },
  {
    id: 'crew',
    numeric: false,
    disablePadding: false,
    label: 'Crew',
    type: TableDataTypes.OBJECT,
    key: 'name'
  },
  {
    id: 'isEmployed',
    numeric: true,
    disablePadding: false,
    label: 'Currently Employed',
    type: TableDataTypes.BOOLEAN
  },
  {
    id: 'isWorking',
    numeric: true,
    disablePadding: false,
    label: 'Currently Working',
    type: TableDataTypes.BOOLEAN
  }
];