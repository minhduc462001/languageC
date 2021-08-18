#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		s= s+'I';
		stack<int> l;
		int dau= 2;
		int cuoi = 1;
		for(int i = 0;i<s.length();i++){
			if(s[i]=='D'){
				l.push(dau);
				dau++;
			}
			if(s[i]=='I'){
				while(!l.empty()){
					cout<<l.top();
					l.pop();
					
				}
				cout<<cuoi;
				cuoi = dau;
				dau++;
			}
		}
		cout<<endl;
	}
	return 0;
}

