#include <bits/stdc++.h>
using namespace std;
int n, s[100], i;
bool unused[100];
void print(){
	for(int j=1; j<=n; j++)	cout << s[j];
	cout<<" ";
	return;
}
void BackTrack(int j){
	for(int i=1; i<=n; i++){
		if(unused[i]==true){
			s[j]=i;
			unused[i]=false;
			if(j==n){
				print();
			}
			else
				BackTrack(j+1);	
			unused[i]=true;
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int k=1; k<=n; k++)	unused[k]=true;
		BackTrack(1);
		cout<<endl;
	}
	
	return 0;
}
