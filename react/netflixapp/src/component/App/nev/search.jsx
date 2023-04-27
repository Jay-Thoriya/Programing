import { useEffect, useState } from "react";
import SeriesData from "../card/SeriesData";


function Search({ setSeries }) {
    const [search, setsearch] = useState("");

    useEffect(() => {
        const result = SeriesData.filter(title => title.SeriesName.toLowerCase().includes(search))
        // console.log(result)
        setSeries(result)
    }, [search, setSeries])
    return (
        <div className="searchBox">
            <input type="text" placeholder="Search....." id="textBox" onChange={e => {
                setsearch(e.target.value)
            }}></input>
        </div>
    );
}

export default Search;

