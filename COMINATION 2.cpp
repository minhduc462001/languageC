#include <bits/stdc++.h>
using namespace std;
int n, k, s[100], i;
void print(){
	for(int j=1; j<=k; j++)	cout << s[j];
	cout<<" ";
	return;
}
void BackTrack(int j){	
	for(int i=s[j-1]+1; i<=n-k+j; i++){	
		s[j]=i;	
		if(j==k){
			print();
		}
		else
			BackTrack(j+1);
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		BackTrack(1);
		cout<<endl;
	}
	
	return 0;
}
