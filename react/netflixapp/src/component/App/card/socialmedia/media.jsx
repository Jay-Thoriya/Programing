import Like from "./Likes";
import SaveMovie from "./SaveMovie";
import Share from "./share";



function SocialMedia(props) {
    return (
        <>
            <Like />
            <SaveMovie id={props.id} />
            <Share />
        </>
    );
}

export default SocialMedia;