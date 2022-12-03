#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int X,Y;
	    cin>>X>>Y;
	    
	    int s=X-Y;
	    if(X>Y)
	        cout<<s<<endl;
	   
	    else
	        cout<<0<<endl;
	}
	return 0;
}
