const st=new Set();
class StaffList {
  //add your code here
   
   
      add(name ,age){
          if(age>20){
            if(!st.has(name))
            st.add(name)
          }
          else throw new Error("Staff member age must be greater than 20");
      }
    remove(name){
          if(st.has(name)){
            st.delete(name);
            return true;
          }
          else return false;
    }
     getSize(){
       return st.size;
     }

   
}
