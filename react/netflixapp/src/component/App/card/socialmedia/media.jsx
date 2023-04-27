import Like from "./Likes";
import Savemovie from "./SaveMovie";
import Share from "./share";



function Socialmedia(props) {
    return (
        <>
            <Like />
            <Savemovie id={props.id} />
            <Share />
        </>
    );
}

export default Socialmedia;