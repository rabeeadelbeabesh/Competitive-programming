
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
        int t = sc.nextInt();
        for (int i = 0; i < t; ++i) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();
            int pre = a;
            for (int j = 0; j < n; ++j) {
                int z = b * power(2, j);

                System.out.print((z + pre) + " ");
                pre += z;
            }
            System.out.println();

        }

    }

}
