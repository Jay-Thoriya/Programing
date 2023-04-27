import { useContext, useState } from "react";
import { SeriesDataId } from "../../App";

function SaveMovie(props) {
    const disk = useContext(SeriesDataId);
    const [active, setActive] = useState(false);

    
    
    
    function AddSeriesInPlaylist() {
        setActive(!active);
        const isIdInPlaylistSeries = Boolean(disk.PlaylistSeriesIds.find(ele => ele === props.id))
        if (isIdInPlaylistSeries) {

        }
        else {
            disk.setPlaylistSeriesIds([...disk.PlaylistSeriesIds, props.id]);
        }

        // console.log(" Data id ", disk.PlaylistSeriesIds);
    }

    return (
        <button onClick={AddSeriesInPlaylist} style={{ border: active ? " 2px solid red" : "2px solid transparent"}} className={"PlaylistSeriesButton"}>
            <img src="queue.png" className="saveMovieImg" alt="saveMovie_img" />
        </button>
    );
}

export default SaveMovie;
