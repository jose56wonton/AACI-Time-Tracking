import { HOST } from 'constants/network';

import axios from 'axios';
const DOMAIN = 'authorities';

export const getAuthorities = () => {
  return axios.get(`${HOST}/${DOMAIN}`);
};
export const putAuthority = (id,authority) => {
  return axios.put(`${HOST}/${DOMAIN}/${id}`, { ...authority });
};
