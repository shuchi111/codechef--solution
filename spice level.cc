#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int n = 0;
	cin>>n;
	while (n--){
	    int a = 0, b = 0, c = 0;
	    cin>>a;
	    if (a<4) {
	        cout<<"MILD"<<"\n";
	    } else if (a>=4 && a<7){
	        cout<<"MEDIUM"<<"\n";
	    } else {
	        cout<<"HOT"<<"\n";
	    }
	}
	return 0;
}
