import Card from "./cards"
import "./index.css";
import sdata from './sdata';
import Toggle from './toggle';
import Search from './search';
import './App.css';
import { useState } from "react";

function App() {
  const [series , setseries ] = useState(sdata);
   
  return (
    <>
    <div className='cards'>List Of Top Best Netflix Series 2022
      <Search setseries={setseries} />
      <Toggle  />
    </div>
    <div className="card-container">
      {series.map((value, index) => <Card key={value.id}  {...value} />
      )}

    </div>
  </>
  );
}

export default App;
