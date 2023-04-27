import Card from "./card/cards"
import "../../index.css";
import sdata from './card/sdata';
import Toggle from './nev/toggle';
import Search from './nev/search';
import './App.css';
import { createContext, useState } from "react";
import Curesorevent from "./CursorEvent";
import Playlist from "./nev/Playlist";

const SdataId = createContext();
function App() {
  const [dataId , setDataId] = useState([]);
  const [series, setseries] = useState(sdata);
  const disk = {dataId:dataId,setDataId:setDataId};

  console.log({dataId});
  return (

    <Curesorevent >

      <div className='cards'>List Of Top Best Netflix Series 2022
        <Search setseries={setseries} />
        <Toggle />
      </div>
        <Playlist id={sdata.id}/> 
      <SdataId.Provider value={disk}>
      <div className="card-container">
        {series.map((value, index) => <Card key={value.id}  {...value} />
        )}
      </div>
      </SdataId.Provider> 
    </Curesorevent>
  );
}

export default App;
export { SdataId };