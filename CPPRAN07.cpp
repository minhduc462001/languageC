#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		long long a[n];
		long long sum = 0;
		long long len;
		for(int i = 0;i<n;i++){
			cin>>a[i];
			sum +=a[i];
		}
		if(sum<=x){
			cout<<-1<<endl;
			continue;
		}
		long long res = 0;
		for(int i = n-1;i>=0;i--){
			if(sum - a[i]>x) sum -= a[i];
			else {
				res = i+1;
				break;
			}
		}
		for(int i = 1;i<n;i++){
			sum = 0;
			len = 0;
			for(int j = i;j<n;j++){
				sum+= a[j];
				len++;
				if(len>res) break;
				if(sum>x){
					res = min(res,len);
					break;
				}
			}
			
		}
		cout<<res<<endl;
	}
	return 0;
}

