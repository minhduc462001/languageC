#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	ifstream fs1;
	fs1.open("01.in");
	ofstream fs2;
	fs2.open("01.out");
	fs1>>t;
	while(t--){
		int n,k;
		fs1>>n>>k;
		int a[n];
		
		for(int i = 0;i<n;i++){
			fs1>>a[i];
		}
		sort(a,a+n);
		fs2<<a[k-1]<<endl;
	}
	fs1.close();
	fs2.close();
	return 0;
}
