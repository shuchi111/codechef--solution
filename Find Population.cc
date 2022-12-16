#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    int X, Y, Z;
    int total;
    while(T > 0) {
        cin >> X >> Y >> Z;
        total = (X - Y) + Z;
        cout << total << endl;
        T--;
    }
	return 0;
}
