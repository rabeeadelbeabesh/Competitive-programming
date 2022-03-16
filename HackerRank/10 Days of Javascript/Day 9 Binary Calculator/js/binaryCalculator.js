let view_res="";
let num1="";
let num2="";
let flag=0,op=0;
let res =document.getElementById('res');
let btn0=document.getElementById('btn0');
let btn1=document.getElementById('btn1');
let btnClr=document.getElementById('btnClr');
let btnEql=document.getElementById('btnEql');
let btnSum=document.getElementById('btnSum');
let btnSub=document.getElementById('btnSub');
let btnMul=document.getElementById('btnMul');
let btnDiv=document.getElementById('btnDiv');

btnClr.addEventListener("click",function(event){
    res.innerHTML="";
}
);
btn1.addEventListener("click",function(event){
  res.innerHTML+="1";
}
);
btn0.addEventListener("click",function(event){
    res.innerHTML+="0";
  }
  
);
btnSum.addEventListener("click",function(event){

    res.innerHTML+="+";
  }
);
btnSub.addEventListener("click",function(event){

    res.innerHTML+="-";
  }
);
btnMul.addEventListener("click",function(event){
    res.innerHTML+="*";
  }
);
btnDiv.addEventListener("click",function(event){
    res.innerHTML+="/";
  }
);
btnEql.addEventListener("click",function(event){
    var expr = res.innerHTML;
    var nums = /(\d+)/g;
    // Replace all base 2 nums with base 10 equivs
    expr = expr.replace(nums, function (match) {
      return parseInt(match, 2);
    });
    // eval in base 10 and convert to base 2
    res.innerHTML = eval(expr).toString(2);
}
)