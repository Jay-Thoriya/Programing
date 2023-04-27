import React from 'react';
import ReactDOM from 'react-dom';
import App from './component/App/App';
// import api from './api'



ReactDOM.render(
  <App />
  ,
  document.getElementById("root")
);

// {/* <Card
//         SeriesImgSRC = { SeriesData[0].SeriesImgSRC }
//         SeriesName = {SeriesData[0].SeriesName}
//         link = {SeriesData[0].link}
//     /> */}
//       {/* {SeriesData.map(array) => 
//     <car SeriesImgSRC='array.imagsrc' SeriesName='array.SeriesName' link='array.link'  />
//      */}