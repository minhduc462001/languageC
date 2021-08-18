#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,h;
		cin>>n>>h;
		int i = 1;
		double result;
		while(i<n){
			double N,I;
			N=n;
			I=i;
			
			result = h*sqrt(I/N);
			std::cout<<std::fixed;
			std::cout<<std::setprecision(6)<<result<<" ";
			i++;
		}
		
		std::cout<<endl;
		
	}
	return 0;
}
