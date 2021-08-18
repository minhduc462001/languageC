#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a;
	set<int> s;
	for(int i = 0;i<n;i++){
		cin>>a;
		s.insert(a);
	}
	for(set<int>::iterator it= s.begin();it!=s.end();it++){
		cout<<*it<<" ";
	}
	return 0;
}

