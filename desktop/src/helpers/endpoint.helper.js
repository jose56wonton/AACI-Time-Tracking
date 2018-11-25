
import { HOST } from 'constants/network';
import axios from 'axios';

export const generateCRUDEndpoints = domain => {
  return {
    getAll: () => {
      return axios.get(`${HOST}/${domain}/`);
    },get: id => {
      console.log(`${HOST}/${domain}/${id}`)
      return axios.get(`${HOST}/${domain}/${id}`);
    },put: employee => {
      console.log(`${HOST}/${domain}/${employee.id}`);
      return axios.put(`${HOST}/${domain}/${employee.id}`, { ...employee });
    },post: employee => {
      return axios.post(`${HOST}/${domain}`, { ...employee });
    },delet: id => {
      return axios.delete(`${HOST}/${domain}/${id}`);
    }
  };
};