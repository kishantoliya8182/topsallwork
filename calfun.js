const cal = (a,b,c) => {
    

    if (c=='+') {   
    return    `Addition=${a+b}`
    }
    else if(c=='-')
    {
    return    `Subtraction=${a-b}`
    }
    else if(c=='*')
    {
    return   `Multiplication=${a*b}`
    }
    else if(c=='/')
    {
    return   `Division=${a/b}`
    }
    else
    {
    return   `Error!`
    }

}

console.log( `${cal(5,5,"+")}`)


