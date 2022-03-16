function getDayName(dateString) {
  let dayName;
  let date=new Date(dateString);
  const days=["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday","Saturday" ];
  dayName=days[date.getDay()];
  // Write your code here
  
  return dayName;
}
console.log(getDayName("10/11/2009"));
console.log(getDayName("11/10/2010"));