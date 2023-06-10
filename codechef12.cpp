#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int c;
	cin>>c;
	int k;
	int count=0;
	
	while(n--){
	    cin>>k;
		if(k%c==0){
	    	count++;
		}	
	}
	cout<<count<<endl;
	return 0;
}
