const arr=[1,2,3,3,4,4,5,5,6,6,5,5,5,6,5,]

const a =arr.filter((e,index) =>
{
  //  console.log(arr.indexOf(e));
   return arr.indexOf(e)== index;
})

console.log(a);