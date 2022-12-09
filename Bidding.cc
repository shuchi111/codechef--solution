#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	//VARIABLES
	int t = 0, a = 0, b = 0, c = 0;
	
	//USR INPUT
	cin >> t;
	
	//LOOP
	while(t--){
	    
	    //USR INPUT
	    cin >> a >> b >> c;
	    
	    //VALUES ASSIGNEMENT AND DISPLAY RESULTS
	    if(a > b && a > c){
	        
	        cout << "alice" << endl;
	    }
	    else if(b > a && b > c){
	        
	        cout << "bob" << endl;
	    }
	    else{
	        
	        cout << "charlie" << endl;
	    }
	}
	return 0;
}
