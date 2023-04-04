import React from 'react';
import ReactDOM from 'react-dom';
import Card from "./cards"
import "./index.css";
import sdata from './sdata';
import api from './api'

ReactDOM.render(
  <>
    <div className='cards'>List Of Top Best Netflix Series 2022</div>
    <div className="card-container">
      {/* <Card
        imgsrc = { sdata[0].imgsrc }
        sname = {sdata[0].sname}
        link = {sdata[0].link}
    /> */}
      {/* {sdata.map(array) => 
    <car imgsrc='array.imagsrc' sname='array.sname' link='array.link'  />
     */}
     api()
      {sdata.map((value, index) => <Card   {...value} />
      )}

    </div>
  </>
  ,
  document.getElementById("root")
);