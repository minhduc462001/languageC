#include <bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	for(int i = 2;i<=sqrt(n);i++)
		if(n%i==0)		
			return false;
	return true;
}

int main(){
	int a,b;
	cin>>a>>b;
	if(a>b) swap(a,b);
	for(int i = a;i<=b;i++){
		if(snt(i)) cout<<i<<" ";
	}
	return 0;
}
