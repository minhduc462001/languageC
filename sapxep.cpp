#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	unsigned long long a[n],b[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i = 1;i<=n;i++){
		if(n%2==0){
			if(i%2 == 0) b[i-1]=a[n-i+1];
			if(i%2 == 1) b[i-1]=a[i-1]; 
		}
		else{
			if(i%2 == 0) b[i-1]=a[n-i];
			if(i%2 == 1) b[i-1]=a[i-1];
		}
	}
	for(int i = 0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
