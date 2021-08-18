#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool check = true;
		for(int i = 0;i<s.length()-1;i++){
			if(s[i]>s[i+1]){
				check = false;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(check) cout<<"YES"<<endl;
	}
	return 0;
}

