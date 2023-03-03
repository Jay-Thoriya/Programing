let arr = [2,4,57,3]

// let a = arr[0]---no need
// let b = arr[1]
// let [a,b,...rest]= arr ---> use this
// let [a,,,...rest]= arr

// let {a,b}={a:2,b:5}
// console.log(a,b)

let arr1 = [3,5,7]
let obj = {...arr1}
console.log(obj)

function sum(v1,v2,v3){
    return v1+v2+v3;
}

console.log(sum(...arr1)) 

let obj2 = {
    name:"jay",
    company:"xyz",
    addres:"abc"
}
console.log({...obj2,name:"kevin"})