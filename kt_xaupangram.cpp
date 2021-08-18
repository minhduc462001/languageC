#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cin.ignore();
		int n;
		cin>>n;
		if(s.length()<26){
			cout<<0<<endl;
			continue;
		}
		int c[26];
		memset(c,0,sizeof(c));
		for(int i = 0;i<s.length();i++){
			c[(int)s[i]-97]++;
		}
		int dem = 0;
		for(int i = 0;i<26;i++){
			if(c[i]==0) dem++;
		}
		if(dem>n) cout<<0<<endl;
		else cout<<1<<endl;
	}
	return 0;
}

