#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int *b = new int[1000000];
		*b = 0;
		for(int i = 0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		
		bool check = true;
		for(int i = 1;i<1000001;i++){
			if(b[i]>n/2){
				check = false;
				cout<<i<<" ";
			}
		}
		if(check){
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}

