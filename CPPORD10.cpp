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
		int maxT ;

		
		for(int i = 1;i<n;i++){
			bool check = false;
			maxT = 0;
			for(int j = 0;j<i;j++){
				if(a[i]>a[j]){
					Lmax[i]=Lmax[j]+1;
					maxT = max(Lmax[i],maxT);
					Lmax[i] = maxT;
					check = true;
					
				}
				
			}
			if(!check) Lmax[i] = 1;
			
		}
		
		sort(Lmax,Lmax+n);
		cout<<Lmax[n-1]<<endl;
	}
	return 0;
}
