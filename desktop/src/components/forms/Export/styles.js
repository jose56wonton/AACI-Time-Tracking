const styles = theme => ({
  hero: {
    height: '100vh',
    display: 'flex',
    flexDirection: 'column',
    justifyContent: 'center',
    alignItems: 'center'
  },
  textField: { width: '100%' },
  heroContent: {
    width: '100%',
    maxWidth: '500px'
  },
  spaceAround: {
    marginLeft: '8px'
  },
  row: {
    display: 'flex',
    flexDirection: 'row',
    alignItems: 'center',
    justifyContent: 'space-between'
  },
  error: {
    color: theme.palette.error.main
  }
});

export default styles;
