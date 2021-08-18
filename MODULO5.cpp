//#include <bits/stdc++.h>
//using namespace std;
//
//long long doso(long long m){
//	long long dodai  = 0;
//	while(m>0){
//		dodai++;
//		m=m/10;
//	}
//	return dodai;
//}
//long long chuyen_so(char c){
//	return (int)(c-'0');
//}
//long long chuyen_so(string n, long long m){
//	long long len = n.length();
//	long long so = 0;
//	long long dai = doso(m)+1;
//	while(dai>0){
//		so = so*10+ chuyen_so(n[len-dai]);
//		dai--;
//	}
//	return so;
//}
//
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		cin.ignore();
//		string n;
//		cin>>n;
//		long long m;
//		cin>>m;
//		long long so = chuyen_so(n,m);
//		cout<<so%m<<endl;
//	}
//	return 0;
//	
//}

#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t;
	cin>>t; 
	while(t--){ 
	string a; 
	long long b,j=0; 
	cin>>a>>b; 
	int s[1000]; 
	int k=a.size(); 
	for(int i=0;i<k;i++){ 
		s[i]=a[i]-'0';
	} 
	for(int i=0;i<k;i++){ 
		j=(j*10+s[i])%b; 
	} 
	cout<<j<<endl; 
	} 
}
