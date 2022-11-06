#include <iostream>
using namespace std;

int main() 
{
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    int x,y,a;
	    cin>>x>>y>>a;
	    if(x<=a&&a<y)
	    { cout<<"Yes"<<endl;}
	   else 
	      {cout<<"No"<<endl;}
	}
	return 0;
}
