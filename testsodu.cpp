#include<bits/stdc++.h>  
using namespace std;
long long convertNumber(string n,long long len){
	long long res = 0;
	for(int i = len-1;i>=0;i--){
		res = res*10 + (long long)(n[len-i-1]-'0');
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		cin.ignore();
		string k;
		cin>>k;
		long long lenK = k.length();
		cout<<convertNumber(n,lenK)<<endl;
	}
}
