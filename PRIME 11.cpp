#include<bits/stdc++.h>
using namespace std;
const long long number[7] = {6,28,496,8128,33550336,8589869056,137438691328};
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		bool breakFor = false;
		for(int i = 0;i<7;i++){
			if(n==number[i]){
				breakFor = true;
				cout<<1<<endl;
				break;
			}
		}
		if(!breakFor) cout<<0<<endl;
	}
	return 0;
}
