#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	else
		for(int i = 2;i<=sqrt(n);i++)
			if(n%i==0) return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	if(snt(t)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}

