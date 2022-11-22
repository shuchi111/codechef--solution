#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int alice = 0;
	int bob = 0;
	cin >> count;
	
	for (int i = 0; i < count; i++){
	    cin >> alice >> bob;
	    (alice > bob) ? cout << "A" : cout << "B";
	    cout << '\n';
	}
	
	return 0;
}
