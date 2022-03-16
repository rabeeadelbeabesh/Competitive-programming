function vowelsAndConsonants(s) {
    const vowels  =[];
    const consonant =[];
    let vowels_letter =new Set([ 'a', 'e', 'i', 'o','u']);
    for(let a of s){
      if(vowels_letter.has(a)){
        vowels.push(a);
      }
      else consonant.push(a);
    }
    for(let a of vowels) console.log(a);
    for(let a of consonant)console.log(a);
  }