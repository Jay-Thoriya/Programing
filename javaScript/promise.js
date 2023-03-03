// let promise = new Promise(function(resolve){
//     alert("hello")
//     resolve(005)
// })

// console.log("one")

// setTimeout(function(){
//    console.log("second")    
// }, 3000);
// console.log("three")

// console.log(promise)

let promise1 = new Promise(function(resolve){
    
    console.log("resolve")
    setTimeout(function(){
        console.log("resolve after 3 second")
        resolve(true)   
    }, 3000);
})

let promise2 = new Promise(function(reject){
    
    console.log("reject")
    setTimeout(function(){
        console.log("reject after 3 second")
        // resolve(true)   
        reject(new Error("i am an error")) 
    }, 3000);
})

promise1.then((value)=>{console.log(value)}).then(() => console.log("after 3 second"))
    

promise2.catch((error)=>{ console.log("some error is catch")
})