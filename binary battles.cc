#include <iostream>
using namespace std;

int main() {
	// your code goes here 
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int count=0;
	    while(n/2!=0){
	        n=n/2;
	        count++;
	    }
	    int c,d,ans;
	    c=count*a;
	    d=(count-1)*b;
	    ans=c+d;
	    
	    cout<<ans<<endl;
	}
	return 0;
}
