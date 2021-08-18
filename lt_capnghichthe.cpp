#include<bits/stdc++.h>
using namespace std;

int main(){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		// 0 1 2 3 4
		// 2 4 1 3 5
		int dem = 0;
		for(int i = 0;i<n-1;i++){
			for(int j = i+1;j<n;j++){
				if(a[j]<a[i]) dem++;
			}
		}
		cout<<dem<<endl;
	return 0;
}

