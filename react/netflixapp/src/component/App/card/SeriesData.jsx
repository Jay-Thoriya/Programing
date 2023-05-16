import { useEffect, useState } from "react";
//"https://imdb-api.com/en/API/Top250Movies/k_dhngf99h" api 250 info


function useApi(what, ) {
    const [moviesData, setData] = useState([]);

    let API = "http://localhost:3000/" + what;

    async function  fetchAPIData(url) {
        try {
            const result = await fetch(url);
            const moviesData = await result.json();
            setData(moviesData);
            
            // eslint-disable-next-line array-callback-return
            moviesData.map((item) => {
                SeriesData.push(item);
            })
        } catch (error) {
            console.log(error);
        }

    }

    useEffect(() => {
        fetchAPIData(API);
    }, [API]);


    return { moviesData }

}

const SeriesData = [];

export default SeriesData;
export { useApi };