import Card from "./card/cards"
import "../../index.css";
import sdata from './card/sdata';
import Toggle from './nev/toggle';
import Search from './nev/search';
import './App.css';
import { useState } from "react";
import Curesorevent from "./CursorEvent";
import Playlist from "./nev/Playlist";

function App() {
  const [series, setseries] = useState(sdata);

  return (

    <Curesorevent >

      <div className='cards'>List Of Top Best Netflix Series 2022
        <Search setseries={setseries} />
        <Toggle />
      </div>
        <Playlist />  
      <div className="card-container">
        {series.map((value, index) => <Card key={value.id}  {...value} />
        )}
      </div>

    </Curesorevent>
  );
}

export default App;
