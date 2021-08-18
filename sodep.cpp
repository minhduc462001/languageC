#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		int l = 0, r = s.length()-1;
		bool check = true;
		while(l<=r){
			if((s[l]-48)%2==1||(s[r]-48)%2==1){
				check = false;
				break;
			}
			if(s[l]==s[r]){
				l++;
				r--;
				check = true;
			}
			else{
				check = false;
				break;
			}
		}
		if(check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

