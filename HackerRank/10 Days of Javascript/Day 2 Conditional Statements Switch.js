function getLetter(s) {
  let letter;
  // Write your code here
  let check=0;
  let s1=new Set(['a','e','i','o','u']);
  let s2=new Set(['b','c','d','f','g']);
  let s3=new Set(['h','j','k','l','m']);
  let s4=new Set(['n','p','q','r','s','t','v','w','x','y','z']);
  s1.has(s[0])?check=1:s2.has(s[0])?check=2:s3.has(s[0])?check=3:check=4;
    switch(check){
      case 1: letter='A';
      break ;
      case 2: letter='B';
      break;
      case 3: letter='C';
      break; 
      case 4 : letter='D';
      break;
    }
  return letter;
}
//console.log(getLetter("adfgt"));