#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,k;
	    cin>>x>>y>>k;
	    int p=abs(x-y);
	    int count=0;
	    count+=p/k;
	    if(p%k!=0)
	    {
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
