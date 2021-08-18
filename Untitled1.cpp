#include<iostream>
using namespace std;

int main(){
	int n;
	long long m;
	long long s=0;
	int i=1;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>m;
		s = (long long) ((m+1)*m/2);
		cout<<s<<endl;
	}
	
	return 0;
}
