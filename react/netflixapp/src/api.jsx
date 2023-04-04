function api() {
    const axios = require("axios");

    const options = {
        method: 'GET',
        url: 'https://unogsng.p.rapidapi.com/genres',
        headers: {
            'X-RapidAPI-Key': '084ebfad86mshbabd5a096e6ec45p105f77jsn2d9aa673a4c8',
            'X-RapidAPI-Host': 'unogsng.p.rapidapi.com'
        }
    };

    axios.request(options).then(function (response) {
        console.log(response.data);
    }).catch(function (error) {
        console.error(error);
    });
}


export default api;