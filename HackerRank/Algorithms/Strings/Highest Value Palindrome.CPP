string highestValuePalindrome(string s, int n, int k) {
    int i=0,j=n-1;
    while (i<=j) {
        if(s[i]!=s[j]){
            if(k==0)return  "-1";
            s[i]=max(s[i],s[j]);
            s[j]='s';
            k-=1;
        }
        i++;j--;
    }
    i=0,j=n-1;
    while (i<=j) {
       if(k>=2&&s[j]!='s'&&s[i]!='9'){
           s[i]=s[j]='9';
           k-=2;
       }
       else if(k>=1&&s[j]=='s'&&s[i]!='9'){
            s[i]=s[j]='9';
           k-=1;
       }
        else if(k>=1&&i==j&&s[i]!='9'){
            s[i]=s[j]='9';
           k-=1;
       }
       else s[j]=s[i];
       i++;j--;
    }
    
     return s;
     
}