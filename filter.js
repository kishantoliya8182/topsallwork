const arr=[
    {name:"laptop",price:1500},
    {name:"phone",price:150},
    {name:"watch",price:800},
    {name:"table",price:300}
]

const a = arr.filter(
    e=>{
        return e.price>=500
   
    }
)

console.log(a);