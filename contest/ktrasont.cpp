#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	if(snt(n)) cout<<"YES";
	else cout<<"NO";
	return 0;
}
