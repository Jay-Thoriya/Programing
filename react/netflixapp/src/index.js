import React from 'react';
import ReactDOM from 'react-dom';
import Card from "./cards"
import "./index.css";
import sdata from './sdata';


ReactDOM.render(
  <>
    <div className='cards'>List Of Top 4 Best Netflix Series 2022</div>
    <div className="card-container">
      {/* <Card
        imgsrc = { sdata[0].imgsrc }
        sname = {sdata[0].sname}
        link = {sdata[0].link}
    /> */}
      {/* {sdata.map(array) => 
    <car imgsrc='array.imagsrc' sname='array.sname' link='array.link'  />
     */}

      {sdata.map((value, index) => <Card   {...value} />
      )}

    </div>
  </>
  ,
  document.getElementById("root")
);