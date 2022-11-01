#include<bits/stdc++.h>
using namespace std;

int solve(){
    int x,y;cin>>x>>y;
    (x<y)?cout<<"0"<<endl:cout<<floor(x/y)<<endl;

    return 0;
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
