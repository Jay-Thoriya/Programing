import { useEffect, useState } from "react";
//"https://imdb-api.com/en/API/Top250Movies/k_dhngf99h" api 250 info


function useApi(what) {
    const [moviesData, setData] = useState([]);
    //console.log(moviesData);
    const [loading, setLoading] = useState(false);
    const [error, setError] = useState(null);

    let API = "http://localhost:3000/" + what;

    const fetchAPIData = async (url) => {
        try {
            const result = await fetch(url);
            const moviesData = await result.json();
            setData(moviesData);

            // eslint-disable-next-line array-callback-return
            moviesData.map((item) => {
                SeriesData.push(item);

            })
        } catch (error) {
            setError(error);
            console.log(error);
        }
        setLoading(true);

    }

    useEffect(() => {
        setLoading(true);
        fetchAPIData(API);
    }, [API]);


    return { moviesData }

}

const SeriesData = [];

export default SeriesData;
export { useApi };