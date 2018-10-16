import { combineReducers } from 'redux';

import user from './User/reducers';
import entities from './Normalizr/entitiesReducer';
import results from './Normalizr/resultsReducer';
import snack from './Snack/reducers';
import employee from './Employee/reducers';
import shift from './Shift/reducers';
import selected from './Selected/reducers';

const rootReducer = combineReducers({
  entities,
  results,
  user,
  snack,
  employee,
  shift,
  selected
});
export default rootReducer;
