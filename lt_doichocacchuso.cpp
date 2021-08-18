#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int r, l;
		bool check = true;
		for(int i = s.length()-1;i>0;i--){
			if(s[i+1]>s[i]){
				r = i;
				l = i+1;
				check = false;
				break;
			}
		}
		if(!check) cout<<"-1"<<endl;
		else{
			
			cout<<s<<endl;
		}
	}
	return 0;
}

