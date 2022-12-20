#include <iostream>
using namespace std;

int main() {
    int T,X,P,Q;
    cin>>T;
    for(int i=1;i<=T;i++){
        cin>>X>>P>>Q;
        cout<<(P-Q)*X<<endl;
    }
	// your code goes here
	return 0;
}
