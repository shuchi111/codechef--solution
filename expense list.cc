#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b,p;
	    cin>>a>>b;
	    p=b-a;
	    cout<<pow(2,p)<<"\n";
	}
	
	return 0;
}
