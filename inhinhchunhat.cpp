#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a[m+1]={0};
	for(int i = 1;i<=m;i++){
		a[i]=i;
	}
	for(int i=1;i<=n;i++){
		int k = i;
		int dem = 0;
		for(int j = 1;j<=m;j++){
			
			if(k>m){
				int b = m-1;
				for(int h = m-dem;h>=1;h--){
					cout<<b<<" ";
					b--;
				}
				j = m+1;
			}
			else{
				cout<<k<<" ";
				k++;
				dem++;
			}
		}
		cout<<endl;
	}
	return 0;
}

