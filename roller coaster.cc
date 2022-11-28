#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N, X, H;
	cin >> N;
	
	for(int i =0; i < N; i++) {
	    cin >> X >> H;
	    cout << (H <= X ? "YES":"NO") << endl;
	}
	return 0;
}
