#include<bits/stdc++.h>

using namespace std;
bool snt(int n){
	if(n==2||n==3) return true;
	else 
		for(int i = 2;i<=sqrt(n);i++)
			if(n%i==0)
				return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i = 1;i<=n;i++){
			if(i == 1){
				cout<<1<<" ";
				continue;	
			} 
			if(snt(i)){
				cout<<i<<" ";
				continue;
			}
			if(i%2==0&&snt(i)==false) {
				cout<<2<<" ";
				continue;
			}
			if(i%2!=0&&snt(i)==false){
				for(int j = 3;j<=n;j++){
					if(i%j==0){
						cout<<j<<" ";
						break;
					}
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
