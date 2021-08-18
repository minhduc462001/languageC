#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
//		sort(a,a+n);
//		
//		int e1 = 0, e2 = n-1, minSum = 0;
//		int min_e1 = 0, min_e2 = n-1;
//		
//		while(e1<e2){
//			int sum = a[e1] + a[e2];
//			if(abs(sum)<abs(minSum)){
//				minSum = sum;
//				min_e1 = e1;
//				min_e2 = e2;
//			}
//			if(sum<0){
//				e1++;
//			}
//			else e2--;
//		}
//		cout<<a[min_e1]<<" "<<	a[min_e2]<<endl;
	
		int gan0 = a[0]+a[1];
		int res = 0;
		for(int i = 0;i<n-1;i++){
			for(int j = i+1;j<n;j++){
				res = a[i]+a[j];
				if(abs(gan0)>abs(res)){
					gan0 = res;
				}
			}
		}
		cout<<gan0<<endl;
	}
	return 0;
}
