let n = [ 95,56,5,86,4,6]

for(i=0;i<n.length;i++){
    console.log(n[i])
}

n.forEach((Element)=>{
    console.log(Element*Element)
})

let a = "jay"
let arr = Array.from(a)
console.log(arr)


// for..of

for(let item of n){
    console.log(item)
}

// for..in

for(let i in n){
    console.log(n[i])
}