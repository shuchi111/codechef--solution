#include <iostream>
using namespace std;

int main() {
	int k;
	cin>>k;
	while(k--){
	    int a,b;
	   cin>>a>>b;
	   int sum=a+b;
	   int count=0;
	   for(int i=2;i<=sum-1;i++){
	           if(sum%i==0){
	                  count++; 
	           }
	   }
	   if(count==0){
	           cout<<"Alice"<<endl;
	   }
	   else{
	           cout<<"Bob"<<endl;
	   }
	       
	}
	return 0;
}
