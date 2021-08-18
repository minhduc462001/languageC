#include<bits/stdc++.h>
using namespace std;

//bool snt(int n){
//	if(n<2) return false;
//	if(n==2||n==3) return true;
//	for(int i = 2;i<=sqrt(n);i++){
//		if(n%i==0) return false;
//	}
//	return true;
//}
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		int tong = n;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				if(i == n/i){
					tong += i;
				}
				else tong = tong + i+ n/i;
			}
		}
		cout<<tong + 1<<endl;
	}
	return 0;
}
