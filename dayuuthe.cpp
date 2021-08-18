#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		getline(cin,a);
		stringstream ss(a);
		string tam;
		vector<string> b;
		while(ss>>tam){
			b.push_back(tam);
		}
		int demc = 0;
		int deml = 0;
		if(b.size() % 2 == 0){
			for(int i = 0;i< b.size();i++){
				if((b[i][b[i].length()-1]-'0')%2 == 0) demc++;
				else deml++;
			}
			if(demc>deml) cout<<"YES"<<"\n";
			else cout<<"NO"<<"\n";
			
		}
		else{
			for(int i = 0;i< b.size();i++){
				if((b[i][b[i].length()-1]-'0')%2 == 0) demc++;
				else deml++;
			}
			if(demc<deml) cout<<"YES"<<"\n";
			else cout<<"NO"<<"\n";
		}
	}
	return 0;
}

