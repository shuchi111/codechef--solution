#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int S,E,R,K;
	cin>>S;
	for(int i=0;i<S;i++){
	    
	cin>>E>>R;
	if(R>E){
	    
	K=R-E;
    cout<<K<<endl;
	}
	else{
	    cout<<"0"<<endl;
	}
	}
	return 0;
}
