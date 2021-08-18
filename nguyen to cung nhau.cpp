#include<bits/stdc++.h>
using namespace std;
int nguyento(int k){
	if ( k<2) return 0;
	for (int i = 2; i<= sqrt(k); i++)
		if ( k % i ==0) return 0;
	return 1;
}
int nguyentocungnhau(int x, int i){ 
	int t;
	t = __gcd(x,i);
	if (t == 1) return 1;
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int d = 0;
		for(int j = 1;j<x;j++)
			if(nguyentocungnhau(x,j)) d++;
		if(nguyento(d)) cout<<"1"<<endl;
		else cout<<"0"<<endl;	
	}
	return 0;
}
