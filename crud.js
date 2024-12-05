const arr= ["kishan","toliya","bharwad"]
const a = (arr)=>
{
    arr.push("maheshbhai")
    re=arr
    return console.log(re)
}

// console.log(arr.push("maheshbhai"));
console.log(a(arr));

const b = (arr) =>
{
    arr.pop()
    return console.log(arr);

}

console.log(b(arr));

const c= (arr) =>
{
    arr.unshift("mr.")
    return console.log(arr);
}

console.log(c(arr));

const d = (arr) =>
{
    arr.shift()
    return  console.log(arr);
}

console.log(d(arr));

