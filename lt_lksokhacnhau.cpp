#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int a[t];
	set<int> s;
	for(int i = 0;i<t;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	for(set<int>::iterator it=s.begin();it!= s.end();it++){
		cout<<*it<<" ";
	}
	
	return 0;
}

