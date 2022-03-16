import java.io.*;
import java.util.*;

public class Solution {

    public static String solve(String s, String t) {
        if (s.length() != t.length()) {
            return "Not Anagrams";
        }
        int[] fqs = new int[26];
        int[] fqt = new int[26];
        for (int i = 0; i < 26; ++i) {
            fqs[i] = 0;
            fqt[i] = 0;
        }
        s = s.toLowerCase();
        t = t.toLowerCase();

        for (int i = 0; i < (int) s.length(); ++i) {
            fqs[(int) (s.charAt(i) - 'a')]++;
            fqt[(int) (t.charAt(i) - 'a')]++;
        }
        for (int i = 0; i < 26; ++i) {
            if (fqs[i] != fqt[i]) {

                return "Not Anagrams";
            }
        }
        return "Anagrams";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next(), t = sc.next();
        sc.close();
        System.out.println(solve(s, t));
    }
}
