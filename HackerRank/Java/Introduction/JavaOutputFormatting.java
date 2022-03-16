import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
public class Solution {
       private static final Scanner sc = new Scanner(System.in);
       public static void skip(){
                sc.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
      }

    public static void main(String[] args) {
  
       
  
        System.out.println("================================");
        String s="" ;int n=0; 
        for(int i=0;i<3;++i){
            s=sc.next();
          n=sc.nextInt();
              System.out.printf("%-15s%03d%n",s,n);
      }
    
      System.out.println("================================");
                 
    }
    
}
