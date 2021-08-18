#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s[0]=='0'){
			cout<<"INVALID"<<endl;
			continue;
		}
		int m[10] = {0};
		bool c = true;
		for(int i = 0;i<s.length();i++){
			if(s[i]>='0'&&s[i]<='9'){
				m[s[i]-48]++;
			}
			else{
				cout<<"INVALID"<<endl;
				c = false;
				break;
			}
		}
		if(!c) continue;
		bool check = true;
		for(int i = 0;i<10;i++){
			if(m[i]==0){
				check = false;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(check) cout<<"YES"<<endl;
	}
	return 0;
}

