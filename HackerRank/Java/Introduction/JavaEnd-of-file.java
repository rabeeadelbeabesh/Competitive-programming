
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    private static final Scanner sc = new Scanner(System.in);

    public static void skip() {
        sc.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
    }

    public static int power(int x, int n) {
        if (n == 0) {
            return 1;
        }
        int ans = power(x * x, n / 2);
        if (n % 2 == 1) {
            ans *= x;
        }
        return ans;
    }

    public static void main(String[] args) {
        int t = 1;
        String s="";
       while(sc.hasNext()){
           s=sc.nextLine();
           skip();
           System.out.println(t+" "+s);
           t++;
        }
    }
}
