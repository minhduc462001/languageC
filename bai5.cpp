#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for(int i = 0; i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int tam = 0, i=0, dem;
		long long giatri = 0;
		for(i = 0;i<n;i++){
			dem = 1;
			while(a[i]==a[i+1]){
				dem++;
				i++;
			}
			if(dem%2==1){
				giatri = a[i];
			}
		}
		cout<<giatri<<endl;
	}
}
