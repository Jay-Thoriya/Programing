import Card from "./card/cards"
import "../../index.css";
import SeriesData from './card/SeriesData';
import Toggle from './nev/toggle';
import Search from './nev/search';
import './App.css';
import { createContext, useState } from "react";
import CursorEvent from "./CursorEvent";
import Playlist from "./nev/Playlist";
import { useApi } from "./card/SeriesData";

const SeriesDataId = createContext();
function App() {
  const [PlaylistSeriesIds, setPlaylistSeriesIds] = useState([]);
  const disk = { PlaylistSeriesIds: PlaylistSeriesIds, setPlaylistSeriesIds: setPlaylistSeriesIds };
  const [movieData , setMovieData] = useState([]);
  const { moviesData } = useApi('movies',setMovieData);
  //console.log("moviesData" , moviesData);
  
  const [series, setSeries] = useState(movieData);
  const [isPLaylist, setISPlaylist] = useState(series);

  return (
    <CursorEvent >
      <div className='cards'>List Of Top Best Netflix Series 2022
        <Search setSeries={setSeries} setISPlaylist={setISPlaylist} movieData={movieData}/>
        <Toggle />

      </div>
      <Playlist setISPlaylist={setISPlaylist} PlaylistSeriesIds={PlaylistSeriesIds} />
      <SeriesDataId.Provider value={disk}>
        <div className="card-container">
          {isPLaylist.map((value, index) => <Card key={value.id}  {...value} moviesData={moviesData} setMovieData={setMovieData}
          />
          )}
        </div>

      </SeriesDataId.Provider>
    </CursorEvent>
  );
}

export default App;
export { SeriesDataId };