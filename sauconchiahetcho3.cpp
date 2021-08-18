#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		char c[n];
		for(int i = 0;i<n;i++){
			cin>>c[i];
		}
		int dem = 0;
		for(int i = 0;i<n;i++){
			int so = 0;
			for(int j = i;j<=n;j++){
				so = so * 10 + c[j]-'0';
				so = so % 3;
				if(so == 0) dem++;
			}
		}
		cout<<dem<<"\n";
	}
	return 0;
}

