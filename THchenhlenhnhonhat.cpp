#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int mins = a[1]-a[0];
		for(int i = 1;i<n-1;i++){
			mins= min(mins, a[i+1]-a[i]);
		}
		cout<<mins<<endl;
	}
	return 0;
}

