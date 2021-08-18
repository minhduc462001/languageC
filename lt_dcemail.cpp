#include<bits/stdc++.h>
using namespace std;

int main(){
	string name;
	getline(cin,name);
	for(int i = 0;i<name.length();i++){
		if(name[i]>='A'&&name[i]<='Z'){
			name[i]+=32;
		}
	}
	stringstream s(name);
	string t;
	vector<string> v;
	while(s>>t){
		v.push_back(t);
	}
	for(int i = 0;i<v.size()-1;i++){
		cout<<v[i][0];
	}
	cout<<v.back()<<"@ptit.edu.vn";
	return 0;
}

