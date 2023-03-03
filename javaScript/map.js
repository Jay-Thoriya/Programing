let num = [555,88,66,22,44,88]

let new_arr = num.map((value,index,array)=>{
    console.log(value,index,array)
    return value+index
})

console.log(new_arr)