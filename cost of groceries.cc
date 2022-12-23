#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,c=0;
        cin>>n>>x;
        int A[n],B[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        for(int i=0;i<n;i++){
            if(A[i]>=x){
                c = c+B[i];
            }
        }
        cout<<c<<endl;
    }   

	// your code goes here
	return 0;
}
