#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		int x = 0;
		
		while (n){
        	n /= p;
        	x += n;
    	}
    	cout<<x<<endl;
	}
	return 0;
}
