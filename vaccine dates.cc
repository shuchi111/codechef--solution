#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,l,r;
        cin>>d>>l>>r;
        if(d<l)
        {
            printf("Too Early\n");
        }
       else if(d>=l&&d<=r)
        {
            printf("Take second dose now\n");
        }
        
        else if(d>r)
        {
            printf("Too Late\n");
        }
        
    }
}
