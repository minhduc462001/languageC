#include<bits/stdc++.h>
using namespace std;
bool duoi86(long long n){
	int tam = 0;
	for(int i = 1;i<=2;i++){
		tam = tam*10 + (n%10);
		n/=10;
	}
	if(tam == 68) return true;
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		
		if(duoi86(n)) cout <<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}
