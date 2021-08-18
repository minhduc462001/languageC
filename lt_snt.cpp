#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n<2) return 0;
	if(n==2&&n==3) return 1;
	else
		for(int i= 2;i<=sqrt(n);i++)
			if(n%i==0) return 0;
	return 1;
}
int main(){
	int t;
	cin>>t;
	if(snt(t)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}

