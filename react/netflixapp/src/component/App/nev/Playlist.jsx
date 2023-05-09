
import SeriesData from "../card/SeriesData";

function Playlist({setISPlaylist , PlaylistSeriesIds}) {

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
            setISPlaylist(result)
    }
    return ( 
        <>
            <button onClick={OpenPlaylist} className="PlayListButton">
                <img src="playlist2.png" className="playlistImg" alt="playlist_img" />
            </button>
        </>
    );
}

export default Playlist;    
