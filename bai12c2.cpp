#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
			
		}
		int frequency = 0;
		for(int i = 0;i<n-2;i++){
			for(int j = i+1;j<n;j++){
				long long k = i*i+j*j;
				for(int m = j+1;m<n;m++){
					if(k == pow(a[m],2)){
						frequency++;
						break;
					}
				}
			}
		}
		if(frequency!=0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
