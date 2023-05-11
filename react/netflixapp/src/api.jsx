
import { useEffect  } from "react";


function Api() {
    
    let API = "http://www.omdbapi.com/?i=tt3896198&apikey=e0f4e19e";
    
    const fetchAPIData = async (url) =>{
        try{
            const result = await fetch(url);
            const moviesData = await result.json();
            
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
            
        </>
    )
}

export default Api;