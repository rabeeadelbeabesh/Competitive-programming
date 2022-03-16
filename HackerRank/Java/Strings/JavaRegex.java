import java.io.*;
import java.util.*;
import java.util.regex.Pattern;
import java.util.regex.PatternSyntaxException;

public class Solution {

    public static void solve(String s) {
        String t = "";
        int z = 0, cnt = 0;
        boolean f = true;

        for (int i = 0; i < s.length(); ++i) {
            if (s.charAt(i) != '.') {
                t += s.charAt(i);
                z = z * 10 + (int) (s.charAt(i) - '0');
            } else {

                if (t.length() > 3 || z < 0 || z > 255) {
                    f = false;

                } else {
                    cnt++;
                }
                t = "";
                z = 0;
            }
        }
        if (t.length() > 3 || z < 0 || z > 255) {
            f = false;
        } else {
            cnt++;
        }
        if (cnt != 4) {
            f = false;
        }

        System.out.println(((f == true) ? "true" : "false"));

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s;
       while(sc.hasNext()){ 
            s = sc.next();
            solve(s);
        }

    }
}
