#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	std::cin>> t;
	while(t--){
		int n;
		unsigned long long k;
		cin>>n>>k;
		long long a[n];
		
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		int l[k]={0};
		l[0]=1;
			for(int i = 0;i<n;i++){
				for(int t = k;t>=a[i];t--){
					if(l[t]==0&&l[t-a[i]]==1){
						l[t]=1;
					}
				}
			}
		bool check = true;
		for(int i =0;i<k;i++){
			if(l[k]==1){
				check = false;
				cout<<"YES"<<endl;
				break;
			}
		}
		if(check) cout<<"NO"<<endl;
	}
	
	return 0;
}
