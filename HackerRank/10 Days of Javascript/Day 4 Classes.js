class Polygon  {
    constructor(arr){
      this.arr=arr;

    }
     perimeter() {
        let Polygon_perimeter=0;
        for(let a of this.arr)Polygon_perimeter+=a;
       return Polygon_perimeter;
    }
}