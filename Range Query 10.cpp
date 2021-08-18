#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i<n;i++){
			cin>>a[i];
		}
		int res = 0;

		int i = 0, j = n-1;
		while(i<=j){
			
			if(a[i]==a[j]){
				i++;
				j--;
				cout<<a[i]<<" & "<<a[j]<<endl;
			}
			else if(a[i]>a[j]){
				j--;
				a[j]+=a[j+1];
				cout<<a[j]<<" & "<<a[j+1]<<endl;
				res++;
			}
			else{
				i++;
				a[i]+=a[i-1];
				cout<<a[i-1]<<" & "<<a[i]<<endl;
				res++;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
