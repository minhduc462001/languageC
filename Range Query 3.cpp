#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	else 
		for(int i = 2;i<=sqrt(n);i++)
			if(n%i==0) return false;
	return true;
		
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int L,R;
		cin>>L>>R;
		int dem=0;
		for(int i = L;i<=R;i++){	
			if(snt(i)) {
				dem++;
			}
		}
		cout<<dem<<endl;
		
	}
	return 0;
}
