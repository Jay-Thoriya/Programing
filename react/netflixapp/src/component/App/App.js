import "../../index.css";
import Card from "./card/cards"
import Toggle from './nev/toggle';
import Search from './nev/search';
import './App.css';
import { createContext, useEffect, useReducer, useState } from "react";
import CursorEvent from "./CursorEvent";
import Playlist from "./nev/Playlist";
import { useApi } from "./card/SeriesData";

const SeriesDataId = createContext();
const DispatchValue = createContext();
function App() {
  const { moviesData } = useApi('movies');
  const [series, setSeries] = useState(moviesData);
  const [isPLaylist, setISPlaylist] = useState(series);
  const [PlaylistSeriesIds, setPlaylistSeriesIds] = useState([]);
  const disk = { PlaylistSeriesIds: PlaylistSeriesIds, setPlaylistSeriesIds: setPlaylistSeriesIds };
  const reducer = (state, action) => {
    switch (action.type) {
      case "SEARCH_SERIES":
        let search = action.payload
        const result = moviesData.filter(movieInfo =>
          movieInfo.Title.toLowerCase().includes(search)
        )
        setSeries(result);
        setISPlaylist(result);
        break;

      case "TOGGLE_CHANGE":
        const cardContainer = document.querySelector('.card-container');
        if (cardContainer.style.backgroundColor === "black") {
          cardContainer.style.backgroundColor = "#77b5fe";
          document.body.style.backgroundColor = "black";
          document.querySelector(".cards").style.color = "white";
        }
        else {
          cardContainer.style.backgroundColor = "black";
          document.body.style.backgroundColor = "#77b5fe";
          document.querySelector(".cards").style.color = "black";
        }
        break;

      default:
        break;
    }
    return state
  }
  const [state, dispatch] = useReducer(reducer, moviesData);
  useEffect(() => {
    setSeries(moviesData);
  }, [moviesData])
  useEffect(() => {
    setISPlaylist(series);
  }, [series])
  return (
    //console.log("moviesData" , moviesData);
    <CursorEvent >
      <DispatchValue.Provider value={dispatch}>
        <div className='cards'>List Of Top Best Netflix Series 2022
          <Search setSeries={setSeries} setISPlaylist={setISPlaylist} moviesData={moviesData} />
          <Toggle />
        </div>
        <Playlist setISPlaylist={setISPlaylist} PlaylistSeriesIds={PlaylistSeriesIds} moviesData={moviesData} />
        <SeriesDataId.Provider value={disk}>
          <div className="card-container">
            {isPLaylist.map((value, index) => <Card key={value.id}  {...value}
            />
            )}
          </div>
        </SeriesDataId.Provider>
      </DispatchValue.Provider>
    </CursorEvent>
  );
}

export default App;
export { SeriesDataId, DispatchValue };