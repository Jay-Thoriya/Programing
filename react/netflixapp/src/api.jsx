
import { useEffect } from "react";

function Api() {
    
    let API = "http://www.omdbapi.com/?i=tt3896198&apikey=e0f4e19e";
    
    const fetchAPIData = async (url) =>{
        try{
            const result = await fetch(url);
            const data = result.json();
            console.log(data);
        }
        catch(error){
            console.log(error);
        }
    }

    useEffect(()=>{
        fetchAPIData(API);
    },  );


    return(
        <>
            <h2> API IS CALL </h2>
        </>
    )
}

export default Api;