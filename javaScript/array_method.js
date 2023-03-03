let num = [2,3,7,4,1,9]

console.log(num.toString())  //----> array convert in to string   it return string

console.log(num.join("-"))   //----> join the string in between " " sing oprtion  it return string

remove = num.pop()  
console.log(num,remove)      //----> delete elemnent in last 

add = num.push(9) 
console.log(num)              //---> add element in last position


remove_first = num.shift()   
console.log(remove_first,num)   //--->  delete first element


add_first = num.unshift(2)   
console.log(num,add_first)   //--->  add first element


console.log(num.length) 
// delete num[0]               //  " IMPORTANT" --> when we delete array element using delete keyword array lenth can "not" change
console.log(num.length)

more_num = [55,69,12,59,99]
let a =num.concat(more_num)
console.log(a)


let comper = (a,b)=>{  return a-b}

console.log(a.sort(comper))         //---> "IMPORTAINT"  sorting by using alfabets not number
console.log(a.reverse())         //---> "IMPORTAINT"  sorting by using alfabets not number


a.splice(2,3,1023,1024)
console.log(a)