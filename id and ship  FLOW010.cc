#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int a;
	cin >> a;
	while(a--){
		char b;
		cin >> b;
		if(b=='b' || b=='B')
			cout << "BattleShip" << endl;
		else if(b=='c' || b=='C')
			cout << "Cruiser" << endl;
		else if(b=='d' || b=='D')
			cout << "Destroyer" << endl;
		else if(b=='f' || b=='F')
			cout << "Frigate" << endl;
	}
	return 0;
}
