#include <bits/stdc++.h> 
using namespace std;
bool check_fibo(int n){
	if (n == 0 || n == 1) return true;
	int fn = 1, f1 = 1, f0 = 0; 
	while (fn < n) {
		fn = f0 + f1; f0 = f1; f1 = fn; 
	} 
	if (fn == n) return true; 
	return false;
}
int main() {
	int t; 
	cin >> t; 
	while (t--) { 
		int n; 
		cin>>n;
		int a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		
		for(int i = 0;i<n;i++){
			if(check_fibo(a[i])){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
