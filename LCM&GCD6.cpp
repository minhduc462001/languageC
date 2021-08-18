#include<bits/stdc++.h>
using namespace std;
// de bai nhu cut
// hieu cua tong tung tap hop bang m
// tong tung tap hop la nguyen to cung nhau
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		// tong tu 1 den n : 
		int sum = (n*(n+1))/2;
		//neu tong nayy maf nho honn m ==> sai
		if(sum<m) {
			cout<<"No"<<endl;
			continue;
		}
		// chia ra 2 tong 2 tap hop
		// s1 cong them m
		int sum1 = (sum+m)/2;
		int sum2 = sum-sum1;
		bool check = false;
		if(sum1-sum2==m){
			// check nguyrn to cung nhau
			if(__gcd(sum1,sum2)==1){
				check = true;
				cout<<"Yes"<<endl;
			}
		}
		if(!check) cout<<"No"<<endl;
	}
	return 0;
}

