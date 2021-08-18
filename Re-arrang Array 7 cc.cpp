#include<bits/stdc++.h>
using namespace std;
int dodaiso(int n){
	int dem = 0;
	while(n>0){
		n/=10;
		dem++;
	}
}
string to_string(int a){
	string s;
	while(a>0){
		s.insert(0,1,(char)(a%10-'0'));
		a/=10;
	}
	return s;
}
int ghepso(int a, int b){
	string sa = to_string(a);
	string sb = to_string(b);
	
	sa+=sb;
	int res = atoi(sa.c_str());
}
bool dk(int a,int b){
	int soAB = ghepso(a,b);
	int soBA = ghepso(b,a);
	if(soAB>soBA) return true;
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<char> v;
//		for(int i = 0;i<n;i++){
//			cin>>a[i];
//			v.push_back()
//		}
		cout<<to_string(n);
		
		
	}
}
