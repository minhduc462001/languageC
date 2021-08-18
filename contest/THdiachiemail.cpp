#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	
	getline(cin,s);
	for(int i = 0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]+=32;
		}
	}
	stringstream ss(s);
	string tam;
	vector<string> v;
	while(ss>>tam){
		v.push_back(tam);
	}
	for(int i = 0;i<v.size()-1;i++){
		cout<<v[i][0];
	}
	cout<<v.back();
	cout<<"@ptit.edu.vn";
	return 0;
}

