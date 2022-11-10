#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int len,result=1;
	    cin>>len;
	    string str;
	    cin>>str;
	    for(int i=0;i<len/2;i++){
	        if(str[i]!=str[(len/2)+i])
	            {
	                result=0;
	                break;
	                
	            }
	    }
	    if(result)
	        cout<<"YES"<<endl;
	       else
	       cout<<"NO"<<endl;
	    
	}
	return 0;
}
