import { useState } from "react";

function Savemovie(){
    const [check , setcheck] = useState(false);
    function chackhandler(e){
        
        setcheck(check === false ? true : false);
    }
    console.log(check );
    return(
        <>
        <button onClick={chackhandler}>
            <img src="queue.png" className="savemovieImg" alt="savemovie_img"/>
        </button>
        </>
    );
    }
    
    export default Savemovie;