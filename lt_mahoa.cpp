#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
//		if(s.length()==1){
//			cout<<s<<1<<endl;
//			continue;
//		}
		int dem=1;
		for(int i = 0;i<s.length();i++){
			if(s[i]==s[i+1]) dem++;
			else{
				cout<<s[i]<<dem;
				dem = 1;
			}
		}
		cout<<endl;
	}
	return 0;
}

