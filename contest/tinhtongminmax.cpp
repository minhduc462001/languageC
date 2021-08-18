#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1;
		cin>>s1;
		string s2;
		cin>>s2;
		unsigned long long so1=0, so2=0;
		for(int i = 0;i<s1.length();i++){
			if(s1[i]=='6') s1[i] = '5';
			so1 = so1*10+s1[i] - '0';
		}
		for(int i = 0;i<s2.length();i++){
			if(s2[i]=='6') s2[i] = '5';
			so2 = so2*10+s2[i]-'0';
		}
		cout<<so1+so2<<" ";
		unsigned long long so3=0, so4=0;
		for(int i = 0;i<s1.length();i++){
			if(s1[i]=='5') s1[i] = '6';
			so3 = so3*10+s1[i] - '0';
		}
		for(int i = 0;i<s2.length();i++){
			if(s2[i]=='5') s2[i] = '6';
			so4 = so4*10+s2[i]-'0';
		}
		cout<<so3+so4<<endl;
	}
	return 0;
}

