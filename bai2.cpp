#include<bits/stdc++.h>
using namespace std;

int main(){
	short n;
	cin>>n;
	long long s=1;
	long long t = 0;
	for(int i = 1;i<=n;i++){
		s =(long long) s*i;
		t =(long long) t+s;
	}
	cout<<t;
	return 0;
}
