
import { useState } from "react";

function Playlist({ setISPlaylist, PlaylistSeriesIds, moviesData }) {
    const [displayText, setDisplayText] = useState("");
    const [CheckPlaylistIsOpen, setCheckPlaylistIsOpen] = useState(true)
    function Check_Playlist() {
        if (CheckPlaylistIsOpen) {
            OpenPlaylist();
            setCheckPlaylistIsOpen(false)
        } else {
            ClosePlaylist();
            setCheckPlaylistIsOpen(true)
        }
    }
    function OpenPlaylist() {
        const result = moviesData.filter(title => {
            console.log("title", title)
            for (let i = 0; i <= PlaylistSeriesIds.length; i++) {
                if (title.imdbID === PlaylistSeriesIds[i]) {
                    return true;
                }
            }
            return false;
        });
        setDisplayText(<h2 style={{ color: "red", textAlign: "center" }}> Playlist </h2>)
        setISPlaylist(result)
    }

    function ClosePlaylist() {
        const result = moviesData.map(id => id);
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
