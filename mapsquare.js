const arr=[1,2,3,4,5]

const a=arr.map(e =>{
    if(e%2==0){
    return e*e;
    }
}).filter(e=>e!=undefined)
console.log(a);
