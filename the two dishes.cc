#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        if(a >= b )
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<2*a-b<<endl;
        }
    }
        
	return 0;
}
