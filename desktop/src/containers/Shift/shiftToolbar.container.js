import React, { Component } from 'react';
import PropTypes from 'prop-types';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';

import AnalyzeToolbar from 'components/tables/Toolbar';

import { analyzeActions } from 'store/actions';
import { shiftSelectors } from 'store/selectors';

import { analyzeStatus } from 'constants/analyze';
import domain from 'constants/domains';

export class ShiftToolbar extends Component {
  selectLabel = selected =>
    `${selected.employee.firstName} ${selected.employee.lastName}'s shift selected`;

  add = () => {
    const { selected, select, setStatus } = this.props;
    if (selected && selected.id) {
      select(domain.SHIFT, selected.id);
    }
    setStatus(domain.SHIFT, analyzeStatus.ADDING);
  };

  render() {
    const { selected, toggleShiftFilter, shiftFilterVisible } = this.props;

    return (
      <AnalyzeToolbar
        selectLabel={this.selectLabel}
        label="Shifts"
        add={this.add}
        selected={selected}
        toggleFilter={toggleShiftFilter}
        isFilterVisible={shiftFilterVisible}
      />
    );
  }
}

ShiftToolbar.propTypes = {
  select: PropTypes.func.isRequired,
  setStatus: PropTypes.func.isRequired,
  selected: PropTypes.object,
  toggleShiftFilter: PropTypes.func,
  shiftFilterVisible: PropTypes.bool
};

/* istanbul ignore next */
const mapStateToProps = state => {
  return {
    shiftFilterVisible: state.analyze.shiftFilterVisible,
    selected: shiftSelectors.getSelectedShift(state)
  };
};

/* istanbul ignore next */
const mapDispatchToProps = dispatch => {
  return {
    ...bindActionCreators({ ...analyzeActions }, dispatch),
    toggleShiftFilter: () => dispatch(analyzeActions.toggleFilter(domain.SHIFT))
  };
};

export default connect(
  mapStateToProps,
  mapDispatchToProps
)(ShiftToolbar);