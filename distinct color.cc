#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--) {
	    int n;
	    cin >> n;
	   	int minBoxes = 0;
	    int balls;
	    for(int i = 0; i < n; i++) {
	        cin >> balls;
	        minBoxes = max(minBoxes, balls);
	    }
	    cout << minBoxes << endl;
	}
	return 0;
}
