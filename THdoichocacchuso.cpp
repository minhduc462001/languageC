#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int index = -1;
		for(int i = s.length()-2;i>=0;i--){
			if(s[i]>s[i+1]){
				index = i;
				break;
			}
		}
		if(index ==-1){
			cout<<-1<<endl;
		}
		else if(index== 0&& s[index+1]=='0'){
			cout<<-1<<endl;
		}
		else{
			swap(s[index],s[index+1]);
			cout<<s<<endl;
		}
	}
	return 0;
}

