const month = ["jan","feb","march","april"]

const a = month =>
{
    month.push("december")
    return `${month}`
}

console.log(a(month));

