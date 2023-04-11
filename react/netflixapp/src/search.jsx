import { useEffect, useState } from "react";
import sdata from "./sdata";


function Search({ setseries }) {
    const [search , setsearch] = useState("");

    useEffect(()=>{
        const result = sdata.filter(title => title.sname.toLowerCase().includes(search))
        // console.log(result)
        setseries(result)
    },[search, setseries])
    return (
        <div className="searchBox">
            <input type="text" placeholder="Search....." id="textBox" onChange={e => {
                setsearch(e.target.value)
            }}></input>
        </div>
    );
}

export default Search;