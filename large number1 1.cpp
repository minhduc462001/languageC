#include <bits/stdc++.h> 
using namespace std;
void print(vector<int>);
void removeZero(vector<int> &v){
	while(v[v.size()-1]==0&&v.size()>1){
		v.pop_back();
	}
	print(v);
}

void init(char str[], vector<int> &v){
	
	for(int i = strlen(str)-1;i>=0;i--){
		v.push_back(str[i]-'0');
	}
	removeZero(v);
}
//void cong(vector<int> v1, vector<int> v2, vector<int> &v3){
//	v3.clear();
//	
//	int len = v1.size()>v2.size()?v1.size():v2.size();
//	v1.resize(len);
//	v2.resize(len);
//	
//	int du = 0;
//	int tam;
//	for(int i = 0;i< len;i++){
//		tam = v1[i]+v2[i] +du;
//		v3.push_back(tam%10);
//		du = tam/10;
//	}
//	if(du>0){
//		v3.push_back(tam);
//	}
//}
void tru(vector<int> v1, vector<int> v2, vector<int> &v3){
	v3.clear();
	int len = v1.size();
	v2.resize(len);
	
	int du = 0;
	int tam;
	for(int i = 0;i<len;i++){
		if(v1[i]<v2[i]+du){
			v3.push_back(v1[i]-v2[i]-du+10);
			du = 1;
		}
		else{
			v3.push_back(v1[i]-v2[i]-du);
			du = 0;
		}
	}
	removeZero(v3);
}
void print(vector<int> v){
	for(int i = v.size()-1;i>=0;i--){
		cout<<v[i];
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		char a[1000];
		cin>>a;
		cin.ignore();
		char b[1000];
		cin>>b;
		
		vector<int> v1,v2,v3;
		init(a,v1);
		cout<<endl;
		init(b,v2);
//		
//		tru(v1,v2,v3);
//		print(v3);
//		cout<<endl;
	}
    return 0; 
} 
