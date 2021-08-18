#include<iostream>
#include<cmath>
using namespace std;

bool check1(long long n){
	if(n<2) return false;
	if(n==2) return true;
	if(n%2==0&&n!=2) return false;
	for(long long i=3;i<=sqrt((float)n);i+=2)
		if(n%i==0) return false;
	return true;
}

bool check2(long long n){
	int sum = 0;
	while(n){
		int a=n%10;
		sum = sum + a;
		n/=10;
		if(a!=2&&a!=3&&a!=5&&a!=7) {
			return false;
		}
	}
	if(check1(sum))return true;
	else return false;
}

int main(){
	int t;
    cin>>t;
    while(t--){	
        int res=0;
        long long a,b;
        cin>>a>>b;
        for(long long i=a;i<=b;i++){
            if(check2(i)&&check1(i))res++;
        }
        cout<<res<<endl;
    }
    return 0;
		
}


