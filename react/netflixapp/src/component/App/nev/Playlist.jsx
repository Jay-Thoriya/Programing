
import { useState } from "react";
import SeriesData from "../card/SeriesData";

function Playlist({setISPlaylist , PlaylistSeriesIds}) {
    const [ displayText , setDisplayText] = useState("");
    const [ CheckPlaylistIsOpen , setCheckPlaylistIsOpen] = useState(true)

    function Check_Playlist(){       
        if(CheckPlaylistIsOpen){
            OpenPlaylist();
            setCheckPlaylistIsOpen(false)
        }else{
            ClosePlaylist();
            setCheckPlaylistIsOpen(true)
        }
    }
    function OpenPlaylist() {   

           //  console.log(PlaylistSeriesIds);

            const result = SeriesData.filter(title =>{
                for(let i =0 ; i<= PlaylistSeriesIds.length ; i++){
                    if(title.id === PlaylistSeriesIds[i]){
                        return true;
                    }
                }
                return false;
            });
           //  console.log("result",result)
            setDisplayText(<h2 style={{color:"red" , textAlign:"center"}}> Playlist </h2>)
            setISPlaylist(result)

    }

    function ClosePlaylist(){
        const result = SeriesData.map(id => id );
        //console.log(" result is ",result)
        setISPlaylist(result);
        setDisplayText("");
    }

    
    return ( 
        <>
            <button onClick={Check_Playlist} className="PlayListButton">
                <img src="playlist2.png" className="playlistImg" alt="playlist_img" />
            </button>
            
            {displayText}
            
            
        </>
    );
}

export default Playlist;    
