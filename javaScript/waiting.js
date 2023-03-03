async function jay(){
    let vadodraWeather = new Promise((resolve, reject) => {
        setTimeout(()=>{
            resolve("21 degr")
        },3000)
    })
    
    let amdavadWeather = new Promise((resolve, reject) => {
        setTimeout(()=>{
            resolve("27 degr")
        },5000)
    })
    console.log("fetching vadodra weather Please wait...")
    let vadodraw = await vadodraWeather
    console.log("fetch vadodra  weather Please wait...")
    console.log("fetching amdavad weather Please wait...")
    let amdavadw = await amdavadWeather
    console.log("fetch amdavad weather Please wait...")
    return[vadodraw,amdavadw]
}

console.log("Wellcome to weather control room ")
let a = jay()
console.log(a)
