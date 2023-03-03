let options ={
    method:"POST",
    headers:{
        "Content-type":"application/json"
    },
    body: JSON.stringify({
        title:"jay",
        body:"thoriya",
        userid:5,
    }),
}

// fetch('https://jsonlaceholder.typicode.com/posts',options).then((response)=>response.json()
// ).then((json)=>console.log(json))

fetch('https://jsonlaceholder.typicode.com/posts',options)