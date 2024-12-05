const pali = (str) =>
{

  var re="";
  for (let i = str.length-1; i >= 0; i--) {
    re=re+str[i]
    
  }

  return str==re ? console.log(`string is palimdrome`) : console.log(`string is not palimdrome`);


 
    
}

pali("kiik")