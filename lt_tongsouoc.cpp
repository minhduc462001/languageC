#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n==1){
			cout<<1<<endl;
			continue;
		}
		long long sum = n+1;
		int i;
		for(i =2;i<=sqrt(n);i++){
			if(n%i==0){
				sum +=i;
				sum+=(n/i);
			}
		}
		if((i-1)*(i-1)==n){
			sum = sum - (i-1);
		}
		cout<<sum<<endl;
	}
	return 0;
}

