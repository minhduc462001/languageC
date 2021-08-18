#include <bits/stdc++.h> 
using namespace std; 

long long minSwap(long long *a, long long n, long long k){
	int count = 0;
	for (long long i = 0; i < n; ++i) 
		if (a[i]<=k) 
			++count;
	long long bad = 0;
	for (long long i = 0;i<count;++i)
		if (a[i]>k)
			++bad;

	long long ans = bad;
	for (long long i = 0,j=count;j<n;++i,++j){
		if (a[i] > k)
			--bad;
		if (a[j] > k)
			++bad;
		ans = min(ans, bad);
	}
	return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(long long i = 0;i<n;i++){
			cin>>a[i];
		}
		cout << minSwap(a, n, k) <<endl;
	}
	return 0;
}

