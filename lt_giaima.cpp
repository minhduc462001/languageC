#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i = 0;i<s.length();i+=2){
			for(int j = (int)s[i+1] - 48;j>0;j--){
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
}

