import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        BigInteger num1= new BigInteger(sc.nextLine());
        BigInteger num2= new BigInteger(sc.nextLine());
        BigInteger sum =num1.add(num2);
        BigInteger mat =num1.multiply(num2);
        System.out.println(sum);
        System.out.println(mat);
    }
}