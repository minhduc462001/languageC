#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	set<string> s;
	cin.ignore();
	while(t--){
		string ss;
		getline(cin,ss);
		s.insert(ss);
	}
	cout<<s.size();
	return 0;
}

