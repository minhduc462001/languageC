#include<bits/stdc++.h>
using namespace std;
/*
	1 11 2 10 4 5 2 1
	1 2  2 3  3 4 2 1
	5 5  4 4  3 3 2 1
	
	1 2 5 3 2
	1 2 3 3 2
	3 3 3 2 1
	
	1 11 2 3 10 9 8 7 6 5 4 
*/
void tanggiam(int a[], int b[], int c[], int n){
	for(int i = 1;i<n;i++){
		for(int j = 0;j<i;j++){
			if(a[i]>a[j]&&b[i]<b[j]+1){
				
				b[i]=b[j]+1;
			}
			if(a[i]<a[j]){
				b[i] = b[i-1];
				break;
			}
		}
	}
	for(int i = n-2;i>=0;i--){
		for(int j = n-1;j>i;j--){
			if(a[i]>a[j]&&c[i]<c[j]+1){
				c[i]=c[j]+1;
			}
			else{
				c[i] = c[i+1];
				break;
			}
		}
	}
//	for(int i = 0;i<n;i++){
//		cout<<b[i]<<" ";
//	}
//	cout<<endl;
//	for(int i = 0;i<n;i++){
//		cout<<c[i]<<" ";
//	}
//	cout<<endl;
	int k = b[0]+c[0]-1;
		for(int i = 0;i<n;i++){
			k = max(k, b[i]+c[i]-1);
		}
		cout<<k<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],l[n],r[n];
		for(int i = 0;i<n;i++){
		 	cin>>a[i];
		 	l[i] = 1;
		 	r[i] = 1;
		}
		tanggiam(a,l,r,n);
//		for(int i = 1;i<n;i++){
//			if(a[i]>=a[i-1]){
//				l[i] = l[i-1] + 1;
//			}
//			else l[i] = l[i-1];
//			
//		}
//		for(int i = n-2;i>=0;i--){
//			if(a[i]>=a[i+1]){
//				r[i] = r[i+1] + 1;
//			}
//			else r[i] = r[i+1];
//			
//		}
//		for(int i = 0;i<n;i++){
//		 	for(int j = 0;j<n;j++){
//		 		int dem = so[j];
//		 		for(int k = 0;k<j;k++){
//		 			if(a[j]>a[k]){
//		 				dem++;
//		 				so[j] = max(so[j],dem);
//					}
//					if(dem==1){
//						so[j] = 1;
//					}
//				 }
//			}
//		}
//		sort(so,so+n);
//		
//		cout<<endl;
		
	}
	return 0;
}


