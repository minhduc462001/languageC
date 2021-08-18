#include<bits/stdc++.h>
using namespace std;

int chia11(string &n){
	long long res = 0;
	long long sumC = 0;
	long long sumL = 0;
	long long len = n.length();
	for(long long i =1;i<=len;i++){
		if(i%2==1){
			sumL += (long long)(n[i-1]-'0');
		}
		else{
			sumC += (long long)(n[i-1]-'0');
		}
	}
	if((sumC-sumL)%11==0){
		return 1;
	}
	else return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		cout<<chia11(n)<<endl;
	}
	return 0;
}
