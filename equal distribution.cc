#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int n,x,y,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>x>>y;
	    if((x+y)%2==0)
	        cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
