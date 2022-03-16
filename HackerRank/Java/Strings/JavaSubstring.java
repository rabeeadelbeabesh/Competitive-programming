import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A=sc.next();
        int star = sc.nextInt();
        int end = sc.nextInt();
        sc.close();
        System.out.println(A.substring(star,end));
       

    }
}
