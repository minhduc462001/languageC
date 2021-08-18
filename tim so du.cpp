#include <bits/stdc++.h> 
using namespace std; 
  
 
int fnMod(string n){
	int res=0;
	for(int i = 0;i<n.length();i++){
		res = res*10+(int) n[i]-'0';
	}
    return res;
} 

int main() {
	int t;
	cin>>t;
	while(t--){
		string x;
		string y;
		cin>>x;
		cin>>y;
		int s1 =(int) fnMod(x);
		int s2 =(int) fnMod(y);
		if(s2>s1) swap(s1,s2);
		int hieu = s1-s2;
    	cout<<hieu<<endl;
	}
    return 0; 
} 
