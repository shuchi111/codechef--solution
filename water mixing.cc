#include <stdio.h>

int main() {
    
    int t;
    scanf ("%d", &t);
    while (t--){
        int a,b,h,c; scanf ("%d %d %d %d", &a, &b, &h, &c);
         int p=b-a;
         if (p>0 && h>=(b-a)) printf ("YES\n");
         else if (p<0 && c>=(a-b)) printf ("YES\n");
         else if (p==0) printf ("YES\n");
         else  printf ("NO\n");
            
        
        
    }
    
    
}
