#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		string s;
		cin>>s;
		
		int l = s.length();
		int res = 0;
		for(int i = 0;i<l;i++){
			res = res + (int)(s[i]-'0');
		}
		if(res == 0){
			cout<<0<<endl;
			continue;
		}
		if(res%9==0){
			cout<<1<<endl;
		}
		else cout<<0<<endl;
	}
	return 0;
}
