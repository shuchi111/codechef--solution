#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--)
	{
	    int x1,x2,y1,y2,p,a,b,m,n;
	    cin>>x1>>y1>>x2>>y2;
	    m=(x1-x2);
	    n=(y1-y2);
	    a=abs(m);
	    b=abs(n);
	    p=max(a,b);
	   
	    cout<<p<<endl;
	}
	return 0;
}
