import java.io.*;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Solution {

    static Scanner sc = new Scanner(System.in);

    public static void solve() {
        String s = sc.nextLine();
        boolean f=true ;
        Pattern p =Pattern.compile("<(.+)>([^<]+)</\\1>");
        Matcher mch =p.matcher(s);
        while (mch.find()) {
            System.out.println(mch.group(2));
             f=false ;            
        }
        if(f)System.out.println("None");

    }

    public static void main(String[] args) {
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            solve();
        }
    }
}
