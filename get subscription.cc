#include <iostream>
using namespace std;

int main() {
	int t,x,a;
	cin>>t;
	for(int i=1;i<=t;i++){
	    cin>>x;
	    a=x-30;
	    if(a>0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
