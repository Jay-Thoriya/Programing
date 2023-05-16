import { useContext } from "react";
import { DispatchValue } from "../App";

function Toggle(props) {
    const dispatch = useContext(DispatchValue);
    return (<div className="toggle"  >
        <input type="checkbox" id="toggle_checkbox" onChange={e => dispatch({type: "TOGGLE_CHANGE"})} />
        <label htmlFor="toggle_checkbox">
            <div id="star">
                <div className="star" id="star-1">
                    ★
                </div>
                <div className="star" id="star-2">
                    ★
                </div>
            </div>
            <div id="moon" />
        </label>
    </div>
    );
}

export default Toggle;