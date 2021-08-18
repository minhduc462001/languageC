#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int *b = new int[1000001];
		*b={0};
		for(int i = 0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		int so = 0;
		int maxx = b[1000000];
		for(int i = 999999;i>=0;i--){
			if(maxx<=b[i]){
				so = i;
				maxx = b[i];
			}
		}
		if(maxx>n/2){
			cout<<so<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}

