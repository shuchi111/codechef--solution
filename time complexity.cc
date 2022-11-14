#include <iostream>
using namespace std;

int main() {

    int k,n,m;
    cin>>k;
    while(k--){
        cin>>n>>m;
        if(n>m){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}
