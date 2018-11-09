import { staticActionTypes } from 'constants/actionTypeConstants';

import { projectActions, projectTaskActions, taskActions,categoryActions,dimensionActions,subcategoryActions } from 'store/actions';

export const getStaticData = () => {
  return async dispatch => {
    dispatch({ type: staticActionTypes.GET_STATIC_DATA_REQUEST });
    try {
      dispatch(projectActions.getProjects());
      dispatch(projectTaskActions.getProjectTask());
      dispatch(taskActions.getTasks());
      dispatch(categoryActions.getCategories());      
      dispatch(dimensionActions.getDimensions());
      dispatch(subcategoryActions.getSubcategories());


      return dispatch({ type: staticActionTypes.GET_STATIC_DATA_SUCCESS });
    } catch (e) {
      dispatch({
        type: staticActionTypes.GET_STATIC_DATA_FAILURE,
        payload: e
      });
      throw e;
    }
  };
};
