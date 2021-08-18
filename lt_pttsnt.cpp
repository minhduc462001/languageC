#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int dem = 0;
	while(n%2==0){
		dem++;
		n/=2;
	}
	if(dem>0){
		cout<<2<<" "<<dem<<endl;
	}
	for(int i = 3;i<=sqrt(n);i+=2){
		dem = 0;
		while(n%i==0){
			dem++;
			n/=i;
		}
		if(dem>0){
			cout<<i<<" "<<dem<<endl;
		}
	}
	if(n>2) cout<<n<<" 1"<<endl;
	return 0;
}

