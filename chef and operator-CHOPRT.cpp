#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int  n;
	 cin >> n;
	 while(n--) {
	     int a , b;
	     cin >> a >> b;
	     
	     if(a > b) {
	         cout << ">" << endl;
	     } else if(a < b) {
	         cout << "<" << endl;
	     } else {
	         cout << "=" << endl;
	     }
	 }
	return 0;
}
