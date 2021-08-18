#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i = 0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i] += 32;
		}
	}
	stringstream ss(s);
	string temp;
	vector<string> v;
	while(ss>>temp){
		v.push_back(temp);
	}
	for(int i = 0;i<v.size()-1;i++){
		cout<<v[i][0];
	}
	cout<<v[v.size()-1];
	cout<<"@ptit.edu.vn";
	return 0;
}

