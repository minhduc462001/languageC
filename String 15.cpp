#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		int len = n.length();
		int dem = len;
		for(int i = 0;i<len;i++){
			int dem = 0;
			for(int j = 0;j<len;j++){
				if(n[i]==n[j]){
					dem++;
				}
			
			}
			if(dem == 1) cout<<n[i];
		}
		cout<<endl;
	}
	return 0;
}
