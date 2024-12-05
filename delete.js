const month=["jan","feb","march","june","july"]
const a = month=>{
    re=month.indexOf("june")
    month.splice(re,1)
    return `${month}`
}

console.log(a(month));
