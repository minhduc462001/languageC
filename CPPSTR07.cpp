#include<bits/stdc++.h>
using namespace std;
string add(string a, string b){
	int lenA = a.length();
	int lenB = b.length();
	if(lenA>lenB) b.insert(0,lenA-lenB,'0');
	else a.insert(0,lenB-lenA,'0');
	string res = "";
	int cong ;
	for(int i = a.length()-1;i>=0;i--){
		cong = a[i]+b[i] - '0'-'0';
		res.insert(0,1,cong%10+'0');
		cong/=10;
	}
	if(cong>0){
		res.insert(0,1,cong%10+'0');
	}
	return res;
}
bool 
bool check(string s){
	for(int i = 1;i<s.length();i++){
		for(int j = i+1;i+j<s.length();j++){
			
		}
	}
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		string s2;
		cin>>s2;
		
		
	}
	return 0;
}

