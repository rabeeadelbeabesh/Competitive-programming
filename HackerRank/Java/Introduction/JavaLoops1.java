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
  
       
         int a=sc.nextInt();
         for(int i=1;i<=10;++i){
             System.out.printf("%d x %d = %d%n", a,i,a*i);
         }
    }
    
}