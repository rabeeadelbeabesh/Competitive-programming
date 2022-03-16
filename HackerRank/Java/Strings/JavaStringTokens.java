
import java.io.*;
import java.util.*;

public class Solution {

    public static void solve(String s) {
        String t = "";
        ArrayList<String> ans = new ArrayList<String>();
        int cnt = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (Character.isAlphabetic(s.charAt(i))) {
                t += s.charAt(i);
            } else {
                if (t != "") {
                    ans.add(t);
                    cnt++;
                    t = "";
                }
            }
        }
        if (t != "") {
            ans.add(t);
            cnt++;
        }
        System.out.println(cnt);
        for (int i = 0; i < cnt; i++) {
            System.out.println(ans.get(i));
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        sc.close();

        solve(s);
    }
}
