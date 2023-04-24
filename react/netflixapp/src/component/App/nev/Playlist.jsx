import { useEffect, useState } from "react";
import sdata from "../card/sdata";

function Playlist({setcheck}){
    function Eventhandler(){
              const [collection , setcollection] = useState("");
        useEffect(() => {
            const result = sdata.filter(title => title.id === setcheck.id);
            
            setcollection(result)
        }, [setcheck])
    }
    return(
        <>
        <button onClick={Eventhandler} className="button">
            <img src="playlist2.png" className="playlistImg" alt="playlist_img"/>
        </button>
        </>
    );
    }
    
    export default Playlist;    
