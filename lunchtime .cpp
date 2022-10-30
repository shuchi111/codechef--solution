#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int t;
ll n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            ll count=0;
            for(int j=i-1;j>=0;j--)
            {
                if(arr[j]>arr[i])
                    break;
                else if(arr[j]==arr[i])
                    count++;
            }
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>arr[i])
                    break;
                else if(arr[j]==arr[i])
                    count++;
            }
            cout<<count<<" ";
        }
    }
    return 0;
}
