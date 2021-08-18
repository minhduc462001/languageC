#include <bits/stdc++.h>
using namespace std;

bool snt(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	for(int i = 2;i<=sqrt(n);i++)
		if(n%i==0)		
			return false;
	return true;
}
int main(){
	int t;
	ifstream fs1;
	fs1.open("03.in");
	ofstream fs2;
	fs2.open("03.out");
	fs1>>t;
	while(t--){
		int n;
		fs1 >> n;
		for(int i = 2;i <= n;i++){
			if(snt(i)) fs2<<i<<" ";
		}
	}
	fs1.close();
	fs2.close();
	return 0;
}
