import Card from "./card/cards"
import "../../index.css";
import SeriesData from './card/SeriesData';
import Toggle from './nev/toggle';
import Search from './nev/search';
import './App.css';
import { createContext, useState } from "react";
import CursorEvent from "./CursorEvent";
import Playlist from "./nev/Playlist";

const SeriesDataId = createContext();
function App() {
  const [PlaylistSeriesIds, setPlaylistSeriesIds] = useState([]);
  const [series, setSeries] = useState(SeriesData);
  const disk = { PlaylistSeriesIds: PlaylistSeriesIds, setPlaylistSeriesIds: setPlaylistSeriesIds };


  console.log({ PlaylistSeriesIds });
  return (

    <CursorEvent >

      <div className='cards'>List Of Top Best Netflix Series 2022
        <Search setSeries={setSeries} />
        <Toggle />
      </div>
      <Playlist id={PlaylistSeriesIds.id} />
      <SeriesDataId.Provider value={disk}>
        <div className="card-container">
          {series.map((value, index) => <Card key={value.id}  {...value} />
          )}
        </div>
      </SeriesDataId.Provider>
    </CursorEvent>
  );
}

export default App;
export { SeriesDataId };