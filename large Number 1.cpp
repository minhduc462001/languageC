#include <bits/stdc++.h> 
using namespace std; 
  
 
int chuyen_so(char c){
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
int main() {
	int t;
	cin>>t;
	while(t--){
		string x;
		cin>>x;
		cin.ignore();
		string y;
		cin>>y;
		vector<int> v1;
		vector<int> v2;
		
		if(x.length()<y.length()){
			swap(x,y);
			duavecungdodai(y,x.length()-y.length());
		} 
		else if(x.length()==y.length()){
			if(x[0]<y[0]) swap(x,y);
		}
		else duavecungdodai(y,x.length()-y.length());
		int lx = x.length();
		int ly = y.length();
		
		
		for(int i = 0;i< lx;i++){
			v1.push_back((int)(x[i]-'0'));
		}
		for(int i = 0;i< ly;i++){
			v2.push_back((int)(y[i]-'0'));
		}
		
		int l = v1.size();
		int res[l]={0};
		for(int i = l-1;i>=0;i--){
			if(v1[i]<v2[i]){
				v1[i] = 10 + v1[i];
				v2[i-1]++;
			}
			res[i] = abs(v1[i] - v2[i]);
		}
		
		
		
		for(int i = 0;i< l;i++){
			cout<<res[i];
		}
		cout<<endl;
	}
    return 0; 
} 
