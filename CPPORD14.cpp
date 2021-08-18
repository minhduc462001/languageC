#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
			b[i] = a[i];
		}
		
		sort(a,a+n);
		//index : 0 1 2 3 4  5 6 7  8
		//value : 6 3 9 8 10 2 1 15 7
		
		// sort
		
		//index : 6 5 1 0 8 3 2 4  7 
		//value : 1 2 3 6 7 8 9 10 15
		
		//index : 8 0 
		//value : 7 6 10 9 15 3 2 _ 8
		
		for(int i = 0;i<n;i++){
			// upper_bound tra ve index so dau tien lon hon a[i]
			// neu ko tim thay tra ve do dai mang
			int t = upper_bound(a,a+n,b[i])-a;
			if(t==n) cout<<"_ ";
			else cout<<a[t]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

