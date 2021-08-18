#include<bits/stdc++.h>
using namespace std;
int chuyenso(char c){
	return (int) (c-'0');
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string s1;
		cin>>s1;
		string t1 = s1;
		cin.ignore();
		string s2;
		cin>>s2;
		string t2 = s2;
		long long so1=0;
		long long so2=0;
		long long l1 = s1.length();
		long long l2 = s2.length();
		for (int i = 0;i<l1;i++){
			if(s1[i]=='6') s1[i]='5';
			so1 = so1*10 + chuyenso(s1[i]);
		}
		
		for (int i = 0;i<l2;i++){
			if(s2[i]=='6') s2[i]='5';
			so2= so2*10+chuyenso(s2[i]);
		}
		cout<<so1+so2<<" ";
		so1 = 0,so2 = 0;
		for (int i = 0;i<l1;i++){
			if(s1[i]=='5') s1[i]='6';
			so1 = so1*10 + chuyenso(s1[i]);
		}
		
		for (int i = 0;i<l2;i++){
			if(s2[i]=='5') s2[i]='6';
			so2= so2*10+chuyenso(s2[i]);
		}
		cout<<so1+so2<<endl;
	}
	return 0;
}
