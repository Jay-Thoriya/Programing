import { useEffect, useState } from "react";
import SeriesData from "../card/SeriesData";


function Search({ setSeries , setISPlaylist }) {
    const [search, setSearch] = useState("");
    const [seriesActive , setSeriesActive] = useState(false);

    useEffect(() => {
        if(seriesActive){
            const result = SeriesData.filter(title => title.SeriesName.toLowerCase().includes(search))
            setSeries(result);
            setISPlaylist(result);
        }
        
        setSeriesActive(true)
    // eslint-disable-next-line react-hooks/exhaustive-deps
    }, [search, setSeries])
    return (
        <div className="searchBox">
            <input type="text" placeholder="Search....." id="textBox" onChange={e => {
                setSearch(e.target.value)
            }}></input>
        </div>
    );
}   

export default Search;

