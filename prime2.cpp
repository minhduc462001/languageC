#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		unsigned long long n;
		cin>>n;
		vector<unsigned long long> v;
		v.clear();
		
			while(n%2==0) {
				v.push_back(2);
				n/=2;
			}
			
		for(unsigned long long i = 3;i<=sqrt(n);i+=2){
			while(n%i==0){
				v.push_back(i);
				n/=i;
			}
		}
		if(n>2) cout<<n<<endl;
		else cout<<v.back()<<endl;	
		
	}
	return 0;
}


