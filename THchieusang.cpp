#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int a[m];
	for(int i = 0;i<m;i++){
		cin>>a[i];
	}
	int dem = 0;
	if(a[0]-k>0) dem++; // kiem tra bien dau
	if(a[m-1]+k<n) dem++;  // kiem tra bien sau
	for(int i = 0;i<m-2;i++){
		if(a[i]+k<a[i+1]) dem++;
	}
	cout<<dem<<endl;
	
	return 0;
}

