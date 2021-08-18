#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	int dem=0;
	while(t%2==0){
		dem++;
		t/=2;
	}
	if(dem >0){
		cout<<2<<" "<<dem<<endl;
	}
	for(int i = 3;i<=sqrt(t);i+=2){
		dem = 0;
		while(t%i==0){
			dem++;
			t/=i;
		}
		if(dem>0){
			cout<<i<<" "<<dem<<endl;
		}
	}
	if(t>2){
		cout<<t<<" "<<1<<endl;
	}
	return 0;
}

