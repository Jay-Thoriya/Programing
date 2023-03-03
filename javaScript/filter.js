let num = [555,88,66,22,44,88]

let new_arr = num.filter((value)=>{
    console.log(value)
    return value<100
})

console.log(new_arr)