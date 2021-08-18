#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		int Max[n] = {0};
		Max[0] = a[0];
		int k = a[0];
		for(int i = 1;i<n;i++){
			Max[i]=a[i];
			for(int j = 0;j<i;j++){
				if(a[i]>a[j]){
					Max[i] = max(Max[i],Max[j]+a[i]);
					k=max(k,Max[i]);
				}	
			}
		}
		//sort(Max,Max+n);
		cout<<k<<endl;
	}
	return 0;
}

