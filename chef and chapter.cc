#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    #endif
    
	int t;
	cin>>t;
	while(t--){
	   int x,y,z;cin>>x>>y>>z;
	   cout<<x*y*z<<endl;
	}
	// your code goes here
	return 0;
}
