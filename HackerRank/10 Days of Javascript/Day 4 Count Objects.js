function getCount(objects) {
  let cnt=0;
    for(let obj of objects){
      if(obj.x==obj.y) cnt++;
    }
    return cnt;
}
