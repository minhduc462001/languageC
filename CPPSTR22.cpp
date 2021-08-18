#include<bits/stdc++.h>
using namespace std;

void tachchu(string n, set<string> &s){
	string tam = "";
	for(int i = n.length()-1;i>=0;i--){
		if(n[i]==' '){
			s.insert(tam);
			tam = "";
			continue;
		}
		tam.insert(0,1,n[i]);
	}
	s.insert(tam);
}
int demdaucach(string s){
	int dem = 0;
	for(int i = 0;i<s.length();i++){
		if(s[i]==' ') dem++;
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1;
		getline(cin,s1);
		string s2;
		getline(cin,s2);
		
		if(demdaucach(s1)<demdaucach(s2)){
			swap(s1,s2);
		}
		
		set<string> m;
		set<string> n;
		tachchu(s1,m);
		tachchu(s2,n);
		for(set<string>::iterator it = n.begin();it!=n.end();it++){
			if(m.find(*it)!=m.end()){
				m.erase(*it);
			}
		}
//		for(int i = 0;i<v1.size()-1;i++){
//			for(int j = i+1;j<v1.size();j++){
//				if(v1[i]==v1[j]) v1[i] = "";
//			}
//		}
		for(set<string>::iterator it=m.begin(); it!=m.end(); ++it){
//			if(v1[i]=="") continue;
			cout<<*it<<" ";
		}
		cout<<endl;
//		for(set<string>::iterator it=n.begin(); it!=n.end(); ++it){
////			if(v1[i]=="") continue;
//			cout<<*it<<" ";
//		}
//		cout<<endl;
	}
	return 0;
}
