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
		
		int Lmax[n]={0};
		Lmax[0] = 1;
		for(int i = 1;i<n;i++){
			for(int j = 0;j<i;j++){
				if(a[i]>a[j]){
					Lmax[i]+=1;
					Lmax[i]=max(Lmax[i-1],Lmax[i]);
				}
				else Lmax[i] = 1;
			}
		}
		sort(Lmax,Lmax+n);
		cout<<Lmax[n-1]<<endl;
	}
	return 0;
}
