#include<bits/stdc++.h>
using namespace std;
string s;
int dem;
void xoa100(){
	for(int i = 0;i<s.length();i++){
		if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
		dem+=3;
		s.erase(i,3);
		xoa100();
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		cin>>s;
		dem = 0;
		xoa100();
		
		
//		int l = s.length();
//		for(int i = 0;i<l;i++){
//			if(s[i]==49&&s[i+1]==48&&s[i+2]==48){
//			
//				s.erase(i,3);
//				cout<<s<<endl;
//				i-=1;
//				dem+=3;
//				l-=3;
//			}
//		}
		cout<<dem<<endl;
	}
	return 0;
}
