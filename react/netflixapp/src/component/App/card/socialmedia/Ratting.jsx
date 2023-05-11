import { useState } from "react";

function Ratting(props) {

    let count;
    const [rating, setRating] = useState(count);
    function HandlerEvent_start() {
        setRating(props.rating);
    }
    function HandlerEvent_end() {
        setRating("");
    }

    return (
        <>
            <div className="RatingGroup">
                <h7>{rating}</h7>
                <button onMouseEnter={HandlerEvent_start} onMouseLeave={HandlerEvent_end}>
                    <img src="rating.png" className="RatingImg" alt="rating_img" />
                </button>
            </div>
        </>
    );
}

export default Ratting;