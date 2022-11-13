#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int b;
        if(x>100)
        {
            b=x-10;
            cout<<b<<endl;
        }
        else
        cout<<x<<endl;
    }
	return 0;
}
