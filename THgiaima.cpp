#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i = 0;i<s.length();i++){
			if(s[i]<65){
				int f = s[i]-'0';
				while(f--){
					cout<<s[i-1];
					
				}
			}
		}
		cout<<endl;
	}
	return 0;
}

