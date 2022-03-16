const num=[1,2,3,6,9,8,7,4];
const ids=["btn1","btn2","btn3","btn6","btn9","btn8","btn7","btn4"];
function rotate (){
  let x=num.pop();
  num.unshift(x);
  let idx=0;
  for(let id of ids){
    document.getElementById(id).innerHTML=num[idx];
    idx++;
  }

}