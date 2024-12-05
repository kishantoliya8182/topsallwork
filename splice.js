arr=[1,2,3,4,5]

const a = (arr) =>{
    arr.splice(1,0,10)
    return console.log(arr);

}

console.log(a(arr))

const b = (arr) =>{
   
    arr.splice(0,0,11)
    return console.log(arr);

}

console.log(b(arr))

const c = (arr) =>
{
    arr.splice(arr.length,0,15)
    return console.log(arr);

}

console.log(c(arr));

const d = (arr) =>
{
    arr.splice(1,2)
    return console.log(arr);
}


console.log(d(arr));