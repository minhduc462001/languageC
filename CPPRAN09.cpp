#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int b[n];
		for(int i = 0;i<n;i++){
			cin>>b[i];
		}
		int dem = 0;
		for(int i = 0;i<n;i++){
			if(b[i]%2!=0){
				b[i]-=1;
				dem++;
			}
		}
		int res=0;
		for(int i = 0;i<n;i++){
			int tam = 0;
			while(true){
				if(b[i]>=2){
					tam++;
				}
				b[i]/=2;
				
				if(b[i]==1||b[i]==0){
					break;
				}
			}
			res = max(res, tam);
		}
		for(int i = 0;i<n;i++){
			if(b[i]%2==1){
				b[i]-=1;
				dem++;
			}
		}
		cout<<res+dem<<endl;
	}
	return 0;
}

