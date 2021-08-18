#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int dem[256]={0};
		for(int i = 0;i<s.length();i++){
			dem[s[i]]++;
		}
		sort(dem,dem+256);
		
		if(s.length()%2==0){
			if(dem[255]>s.length()/2) cout<<0<<endl;
			else cout<<1<<endl;
		}
		if(s.length()%2!=0){
			if(dem[255]>s.length()/2+1) cout<<0<<endl;
			else cout<<1<<endl;
		}
		
//		for(int i=0;i<256;i++){
//			if(dem[i]==0) continue;
//			cout<<dem[i]<<endl;
//		}
	}
	return 0;
}
