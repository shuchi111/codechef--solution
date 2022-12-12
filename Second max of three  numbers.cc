#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,n1,n2,n3;
	cin>>n;
	for(int i = 0;i<n;i++){
	    
	cin>> n1 >> n2 >> n3;
	
	if(n1<n2 && n1>n3 || n1<n3 && n1>n2 ){
	    cout<<n1<<endl;
	}
		else if(n2<n1 && n2>n3 || n2<n3 && n2>n1 ){
	    cout<<n2<<endl;
	}
	else{
	    cout<<n3<<endl;
	}
	
	}
	
	
	
	return 0;
}
