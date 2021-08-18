#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int k=0;
		int len = s.length();
		if(len%2==0){
			for(int i = 0;i<s.length();i+=2){
				k = (s[i]-'0')-(s[i+1]-'0')+k;
			}
		}
		else {
			for(int i = 0;i<s.length();i++){
				k = (s[i]-'0')*pow(-1,i)+k;
			}
		}
		
		if(k%11==0){
			cout<<1<<endl;
		}
		else cout<<0<<endl;
	}
	return 0;
}

