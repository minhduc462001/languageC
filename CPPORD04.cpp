#include<bits/stdc++.h>
using namespace std;
int FindMaxSum(int arr[], int n)
{
  	int incl = arr[0];
  	int excl = 0;
 	int excl_new;
 	for (int i = 1; i < n; i++){
     /* current max excluding i */
     excl_new = (incl > excl)? incl: excl;
  
     /* current max including i */
     incl = excl + arr[i];
     excl = excl_new;
  }
  
   /* return max incl and excl */
   return ((incl > excl)? incl : excl);
}
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
		
//		int Lmax[n];
//		Lmax[0] = a[0];
//		if(a[1]<a[0]){
//			Lmax[1] = a[0];
//		}
//		else Lmax[1] = a[1];
//		
//		for(int i = 2;i<n;i++){
//			Lmax[i] = a[i] + Lmax[i-2];
//			if(Lmax[i]<Lmax[i-1]){
//				Lmax[i] = Lmax[i-1];
//			}
//		}
////		stable_sort(Lmax,Lmax+n);
//		for(int i = 0;i<n;i++){
//			cout<<Lmax[i]<<" ";
//		}
//		cout<<endl;
//		cout<<Lmax[n-1]<<endl;
		cout<<FindMaxSum(a,n)<<endl;
	}
	return 0;
}
