#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	  
	  
	    if((y%z==0)){
	        int p=(y/z);
	        int ans=x*p;
	        cout<<ans<<endl;
	    }
	    else if(y%z!=0){
	        int q=(y/z)+1;
	        int an=x*q;
	        cout<<an<<endl;
	    }
	}
	return 0;
}
