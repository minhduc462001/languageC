#include<bits/stdc++.h>
using namespace std;
int chuyenso(char c){
    return (int)(c-'0');
} 
void duavecungdodai(string &x,int k){
	x.insert(0,k,'0');
}
void hieu(vector<int> v1, vector<int> v2, vector<int> &v3){
	int l = v1.size();
	for(int i = l-1;i>=0;i--){
		if(v1[i]<v2[i]){
			v2[i-1]++;
		}
		v3[i] = v1[i] - v2[i];
	}
}
void chiacho1so(vector<int> v1, int p){
	if()
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		
		cin.ignore();
		string b;
		cin>>b;
		
		int la = a.length();
		int lb = b.length();
		//neu a<b => a/b = 0
		vector<int> v1, v2;
		for(int i = 0;i<la;i++){
			v1.push_back(chuyenso(a[i]));
		}
		for(int i = 0;i<lb;i++){
			v2.push_back(chuyenso(b[i]));
		}
		if(la<lb){
			cout<<0<<endl;
			continue;
		}
		//neu 2 do dai bang nhau
		if(la==lb){
			//neu a = b => a/b = 1
			if(a==b){
				cout<<1<<endl;
				continue;
			}
			else if(v1[0]<v2[0]){
				cout<<0<<endl;
				continue;
			}
			else{
				int chia = v1[0]/v2[0];
				for(int i = 1;i<la;i++){
					if(chia*)
				}
			}
		}
		if(la>lb){
			
		}
		
	}
}
