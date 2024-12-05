const pali = (a) => {
    var ans = 0
    var t=a;
  
    while(a>0)
        {
           rem=a%10;
          ans=ans*10+rem;
          a=parseInt(a/10);
        }
   
        if (ans==t) {
            return `number is palimdrome`
        }
        else
        {
            return `number is not palimdrome`
        }
}

console.log( pali(152))
