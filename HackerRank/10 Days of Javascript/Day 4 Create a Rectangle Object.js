function Rectangle(a, b) {
  return {
      length: a,
      width: b,
      perimeter: 2 * (a + b),
      area: a * b,
  }
  
}
let a= new Rectangle(4,6);
console.log(a.area);