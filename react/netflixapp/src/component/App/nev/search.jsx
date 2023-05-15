import { useState } from "react";




function Search({ setSeries, setISPlaylist, movieData }) {
    const [search, setSearch] = useState("");
    console.log(movieData)
    
    function inputSearch() {
        const result = movieData.filter(movieInfo =>
            movieInfo.Title.toLowerCase().includes(search)
            )
            setSeries(result);
        setISPlaylist(result);
    }

    return (
        <div className="searchBox">
            <input type="text" placeholder="Search....." id="textBox" onChange={e => {
                inputSearch()
                setSearch(e.target.value)
            }}></input>
        </div>
    );
}

export default Search;

