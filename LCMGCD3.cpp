#include<bits/stdc++.h>
using namespace std;
const long long m = 1e9+7;

long long powMod(long long a, long long b, long long m)
{
    if(b==0)return 1;
    long long x=powMod(a,b/2,m);
    if(b%2==0)return x*x%m;
    return a*(x*x%m)%m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		cin>>a[0]>>a[1];
		unsigned long long int mul = a[0]*a[1];
		int ucll = __gcd(a[0],a[1]);
		for(int i = 2;i<n;i++){
			cin >> a[i];
			ucll = __gcd(ucll,a[i]);
			mul = mul%m*a[i]%m;
		}
		
		cout<<powMod(mul,ucll,m)<<endl;
	}
}
