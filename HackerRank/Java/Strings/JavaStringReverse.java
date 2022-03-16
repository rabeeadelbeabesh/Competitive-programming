
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s=sc.next(),t="";
        sc.close();

        StringBuffer str=new StringBuffer(s);
        str.reverse();
        t=str.toString();
        if(t.endsWith(s)){
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }
       
       

    }
}
