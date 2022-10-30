#include <bits/stdc++.h>
using namespace std;

string god(int n,int b[],string &s){
        int in = -1;

        for(int i = 0 ; i < n ; i++)
        {
            if(b[i]!=-1 && in==-1)
                in = i;
        }

        if(in==-1)
        {
            return "YES";
        }

        int TOP = 10000000, BOTTOM = 0, top = 10000000, bottom = 0; 
        int f = 1;

         
        for(int i = 0; i < n-1; i++)
        {
            if(b[i] != -1)
            {
                if((b[i] < bottom) || (b[i] > top))
                {
                    f = 0; break;
                }
                top = b[i]; bottom = b[i];
            }
            
            if(top < bottom)
            {
                f = 0; break;
            }
            
            if(s[i] == '>')
            {
                top--; bottom = BOTTOM;
                
            }
            else if(s[i] == '<')
            {
                top = TOP; bottom++;
            }
        }
        
        if(top < bottom)
        {
            f = 0;
        }
        else if((b[n-1] != -1) && ((b[n-1] < bottom) || (b[n-1] > top)))
            f = 0;
            
        if(f)
            return "YES";
        else
            return "NO";


    
}


int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[n];
        for (int i = 0; i < n; ++i)  
        {
           cin >> b[i];
        }

        string s;
        cin>>s;

        cout<<god(n,b,s)<<endl;
    }

}
