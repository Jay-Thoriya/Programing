import Like from "./Likes";
import SaveMovie from "./SaveMovie";
import Ratting from "./Ratting";



function SocialMedia(props) {
    return (
        <>
            <Like like={props.like} />
            <SaveMovie id={props.id} />
            <Ratting rating={props.rating} />
        </>
    );
}

export default SocialMedia;