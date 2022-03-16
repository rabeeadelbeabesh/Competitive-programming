function getSecondLargest(nums) {
  // Complete the function
    const arr=[];
    let mx=-1;
    for(let a of nums) {
        mx=Math.max(a,mx);
        arr.push(parseInt(a));
    
    }
    
    arr.sort((a, b) => a - b);
  
    for(let i=arr.length-1;i>=0;--i){
        if(mx!=arr[i]) return arr[i];

    }
    
}