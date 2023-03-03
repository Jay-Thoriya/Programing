let num = [555,88,66,22,44,88]

let new_arr = num.reduce((e1 ,e2)=>{
    console.log(e1,"+",e2)
    return e1+e2
})

console.log(new_arr)