
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
public class Solution {
private static final Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
       int a= sc.nextInt();
       double d =sc.nextDouble();
       
           sc.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
              String s =sc.nextLine();
            sc.close();
            
            System.out.println("String: "+s);
            System.out.println("Double: "+d);
            System.out.println("Int: "+a);
            
    }
    
}