#include<bits/stdc++.h>
using namespace std;

//bool snt(int n){
//	if(n<2) return false;
//	if(n==2||n==3) return true;
//	for(int i = 2;i<=sqrt(n);i++){
//		if(n%i==0) return false;
//	}
//	return true;
//}
int main(){
	int n;
	cin>>n;
	int dem = 0;
	
	while(n%2==0){
		dem++;
		n/=2;
	}
	if(dem>0)
		cout<<2<<" "<<dem<<endl;
	for(int i = 3;i<=sqrt(n);i+=2){
		dem = 0;
		while(n%i==0){
			dem++;
			n/=i;
		}
		if(dem>0){
			cout<<n<<" "<<dem<<endl;
		}
	}
	if(n>2){
		cout<<n<<" "<<1;
	}
	return 0;
}
