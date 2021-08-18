#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		char maxx = s[0];
		int dem = 1;
		for(int i = 1;i<s.length();i++){
			if(s[i]>=maxx) dem++;
			else break;
			maxx=max(maxx,s[i]);
		}
		if(dem == s.length()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

