import Card from "./card/cards"
import "../../index.css";
import SeriesData from './card/SeriesData';
import Toggle from './nev/toggle';
import Search from './nev/search';
import './App.css';
import { createContext, useState } from "react";
import CursorEvent from "./CursorEvent";
import Playlist from "./nev/Playlist";
import Api from "../../Api";

const SeriesDataId = createContext();
function App() {
  const [PlaylistSeriesIds, setPlaylistSeriesIds] = useState([]);
  const [series, setSeries] = useState(SeriesData);
  const disk = { PlaylistSeriesIds: PlaylistSeriesIds, setPlaylistSeriesIds: setPlaylistSeriesIds };
  const [isPLaylist , setISPlaylist] = useState(series);

 // console.log(" playlist array", PlaylistSeriesIds );
 console.log(" rendering this component",{PlaylistSeriesIds, series, isPLaylist});



  return (
    <CursorEvent >
      <div className='cards'>List Of Top Best Netflix Series 2022
        <Search setSeries={setSeries} />
        <Toggle />
      </div>
      <Playlist setISPlaylist={setISPlaylist} PlaylistSeriesIds={PlaylistSeriesIds} />
      <SeriesDataId.Provider value={disk}>
        <div className="card-container">
          {isPLaylist.map((value, index) => <Card key={value.id}  {...value} />
          )}
        </div>
      </SeriesDataId.Provider>
    </CursorEvent>
  );
}

export default App;
export { SeriesDataId };