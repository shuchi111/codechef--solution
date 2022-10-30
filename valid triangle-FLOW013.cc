#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin >> t;
	for(i=0;i<t;i++){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int ps=a+b+c;
	    if(ps==180) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
