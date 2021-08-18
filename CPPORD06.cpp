#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
			b[i] = a[i];
		}
		int Min[n], Max[n]; 
		Min[0]= a[0];
		Max[n-1]= a[n-1];
		for(int i = 1;i<n;i++){
			if(a[i]<a[i-1]){
				Min[i] = a[i];
				
			}
			else {
				Min[i] = a[i-1];
				a[i] = a[i-1];
			}
			
			
		}
		for(int i = n-2;i>=0;i--){
			if(b[i]>b[i+1]){
				Max[i] = b[i];
			}
			else{
				Max[i] = b[i+1];
				b[i] = Max[i];
			}
		}
//		for(int i = 0;i<n;i++){
//			cout<<Min[i]<<" ";
//		}
//		cout<<endl;
//		
//		for(int i = 0;i<n;i++){
//			cout<<Max[i]<<" ";
//		}
		int t;
		int kq = 0;
		for(int i = 0, j = 0;i<n&&j<n;){
			if(Min[i]<=Max[j]){
				t = j-i;
				j++;
			}
			else i++;
			kq = max(kq,t);	
		}
//		int maxij = 0;
//		for(int i =0;i<n;i++){
//			for(int j = n-1;j>i;j--){
//				if(a[i]<a[j]){
//					maxij = max(maxij, j -i);
//				}
//			}
//		}
		cout<<kq<<endl;

	}
	return 0;
}

