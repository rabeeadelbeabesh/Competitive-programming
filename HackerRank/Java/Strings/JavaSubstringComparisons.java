import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s=sc.next();
        int n = sc.nextInt();
        sc.close();
        
        String mx=s.substring(0,n),mn=s.substring(0,n),t=s.substring(0,n);

        for(int i=n;i<s.length();++i){
                t=t.substring(1);
            t=t+s.charAt(i);
            if(mx.compareTo(t)<0){
                mx=t;
            }
            if(mn.compareTo(t)>0){
                mn=t;
            }
            
        }
       System.out.print(mn+"\n"+mx);
 
       

    }
}
