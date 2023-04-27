import { useContext, useState } from "react";
import { SdataId } from "../../App";

function Savemovie(props){
    const [check , setcheck] = useState(false);
    const disk = useContext(SdataId);
    function chackhandler(){
        
        setcheck(check === false ? true : false);
        console.log("data id : ",disk)
        if(check === true){ disk.setDataId(if( dataId.map() != props.id ){ [...disk.dataId , props.id ] })}
    
    }
    console.log(check);
    return(
        <>
        <button onClick={chackhandler}>
            <img src="queue.png" className="savemovieImg" alt="savemovie_img"/>
        </button>
        </>
    );
    }
    
    export default Savemovie;