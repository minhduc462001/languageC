#include<iostream>
#include<cmath>
using namespace std;

long long soNT(long long n){
	int check = 1;
	if(n<2) return 0;
	else
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) check = 0;
		return check;
	}
}

long long tongCS (long long n){
	int sum=0;
	
	while(n>0){
		sum= sum+ n%10;
		n/=10;
	}
	return sum;
}
long long csNT(long long n){
	int check = 1, temp;
	while(n>0){
		temp = n%10;
		n/=10;
		if(soNT(temp)!=1) check = 0;
	}
	return check;
}
int main(){
	short n;
	long long a, b;
	cin>>n;
	for(short i = 1; i<=n ;i++){
		cin>>a>>b;
		short count=0;
		
		for(long long j = a;j <= b ; j++){
			if(soNT(j)&&csNT(j)&&soNT(tongCS(j))){
				count++;
			}	
		}
		cout<<count;
	}
}
