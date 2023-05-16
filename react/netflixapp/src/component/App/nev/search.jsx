import { useContext } from "react";
import { DispatchValue } from "../App";
 
function Search({ setSeries, setISPlaylist, moviesData }) {
    
    const dispatch = useContext(DispatchValue);

    
    return (
        <div className="searchBox">
            <input type="text" placeholder="Search....." id="textBox" onChange={e => {
                dispatch({type: "SEARCH_SERIES" , payload : e.target.value})
            }}></input>
        </div>
    );
}

export default Search;

