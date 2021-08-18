#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		set<int> s;
		for(int i = 0;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		for(set<int>::iterator l = s.begin();l!=s.end();l++){
			
		}
		
		cout<<*l<<endl;
		int cl = *r-*l;
		if(cl==n+1) cout<<0<<endl;
		else cout<<cl-s.size()+1<<endl;
	}
	return 0;
}
//1 2 3 4 5 6 7 8 9 10
//1 2 4 5 10
//1 2 3 4 5 6 7 8 9 10
//1 10
