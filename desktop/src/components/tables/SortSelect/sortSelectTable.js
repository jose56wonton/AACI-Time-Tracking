import React from 'react';
import PropTypes from 'prop-types';

import { withStyles } from '@material-ui/core/styles';
import { TableCell,TableRow,Checkbox,TableBody,Table } from '@material-ui/core';

import EnhancedTableHead from './head';
import EnhancedTableToolbar from './tool';
import styles from './styles';
import * as TableDataTypes from 'constants/tableDataTypes';




class EnhancedTable extends React.Component {
  state = {
    order: 'asc',
    orderBy: 'firstName',
    selected: [],
  };
  
  desc = (a, b, orderBy) => {            
    if (b[orderBy] < a[orderBy]) {
      return -1;
    }
    if (b[orderBy] > a[orderBy]) {
      return 1;
    }
    return 0;    
  }
  
  stableSort = (array, cmp) => {
    const stabilizedThis = array.map((el, index) => [el, index]);
    stabilizedThis.sort((a, b) => {
      const order = cmp(a[0], b[0]);
      if (order !== 0) return order;
      return a[1] - b[1];
    });
    return stabilizedThis.map(el => el[0]);
  }
  
  getSorting = (order, orderBy) => {
    return order === 'desc' ? (a, b) => this.desc(a, b, orderBy) : (a, b) => -this.desc(a, b, orderBy);
  }

  handleRequestSort = (event, property) => {
    const orderBy = property;
    let order = 'desc';

    console.log(property);

    if (this.state.orderBy === property && this.state.order === 'desc') {
      order = 'asc';
    }

    this.setState({ order, orderBy });
  };

  handleSelectAllClick = event => {
    if (event.target.checked) {
      this.setState(() => ({ selected: this.props.tableData.map(n => n.id) }));
      return;
    }
    this.setState({ selected: [] });
  };

  handleClick = (event, id) => {
    const { selected } = this.state;
    const selectedIndex = selected.indexOf(id);
    let newSelected = [];

    if (selectedIndex === -1) {
      newSelected = newSelected.concat(selected, id);
    } else if (selectedIndex === 0) {
      newSelected = newSelected.concat(selected.slice(1));
    } else if (selectedIndex === selected.length - 1) {
      newSelected = newSelected.concat(selected.slice(0, -1));
    } else if (selectedIndex > 0) {
      newSelected = newSelected.concat(
        selected.slice(0, selectedIndex),
        selected.slice(selectedIndex + 1),
      );
    }

    this.setState({ selected: newSelected });
  };
 

  isSelected = id => this.state.selected.indexOf(id) !== -1;

  render() {
    const { classes, tableData, headerData } = this.props;
    const { order, orderBy, selected } = this.state;
    console.log(order,orderBy)
    return (
      <div >
        <EnhancedTableToolbar numSelected={selected.length} />
        <div className={classes.tableWrapper}>
          <Table className={classes.table} aria-labelledby="tableTitle">
            <EnhancedTableHead
              headerData={headerData}
              numSelected={selected.length}
              order={order}
              orderBy={orderBy}
              onSelectAllClick={this.handleSelectAllClick}
              onRequestSort={this.handleRequestSort}
              rowCount={tableData.length}
            />
            <TableBody>
              {this.stableSort(tableData, this.getSorting(order, orderBy))
                .map(n => {
                  const isSelected = this.isSelected(n.id);
                  return (
                    <TableRow
                      hover
                      onClick={event => this.handleClick(event, n.id)}
                      role="checkbox"
                      aria-checked={isSelected}
                      tabIndex={-1}
                      key={n.id}
                      selected={isSelected}
                    >
                      <TableCell padding="checkbox">
                        <Checkbox checked={isSelected} />
                      </TableCell>
                      {headerData.map(ele => {
                        //console.log(ele);
                        const { type, id, key } = ele;

                        if (type === TableDataTypes.NUMBER || type === TableDataTypes.BOOLEAN) {
                          return <TableCell key={id} numeric >{n[id]}</TableCell>;
                        } else if (type === TableDataTypes.STRING) {
                          return <TableCell key={id} >{n[id]}</TableCell>;
                        } else if (type === TableDataTypes.OBJECT) {
                          return <TableCell key={id} >{n[id][key]}</TableCell>;
                        }
                      })}
                    </TableRow>
                  );
                })}             
            </TableBody>
          </Table>
        </div>        
      </div>

    );
  }
}

EnhancedTable.propTypes = {
  classes: PropTypes.object.isRequired,
  tableData: PropTypes.array.isRequired,
  headerData: PropTypes.array.isRequired
};

export default withStyles(styles)(EnhancedTable);