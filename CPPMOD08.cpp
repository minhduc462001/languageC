#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	long long ans = 0;
	while(t--){
		long long b,p;
		cin>>b>>p;
		for(long long i = 1;i<p;i++){
			if((i*i)%p==1){
				long long t = i+p*(b/p);
				if(t>b){
					t-=p;
				}
				ans +=((t-i)/p+1);
			}
		}
		
		cout<<ans<<endl;
	}
	return 0;
}

