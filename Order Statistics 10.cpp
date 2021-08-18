//#include <bits/stdc++.h>
//using namespace std;
////int _lis(int a[],int n, int *max_ref){
////	if(n==1) return 1;
////	int res, max = 1;
////	for(int i = 1;i<n;i++){
////		res = _lis(a,i,max_ref);
////		/*de quy nhan tat ca LIS ket thúc bang a [0],
////       a[1] ... a[n-2]. Neu a[i-1] nho hon
////       a[n-1] và ket thuc tai da bang a[n-1]
////       can duoc cap nhat, sau do cap nhat no*/
////		if(a[i-1]<a[n-1]&&res+1>max){
////			max = res+1;
////		}
////		
////	}
////	if(*max_ref<max){
////		*max_ref = max;		
////	}
////	return max;
////}
////int lis(int a[], int n){
////	int max = 1;
////	_lis(a,n,&max);
////	return max;
////}
//int cI(vector<int> &v, int l, int r, int k){
//	while(r-l>1){
//		int m = l+(r-1)/2;
//		if(v[m]>= k) r= m;
//		else l = m;
//	}
//	return r;
//}
//int longest(vector<int> &v){
//	if(v.size()==0) return 0;
//	vector<int> duoi(v.size(),0);
//	int len = 1;
//	duoi[0] = v[0];
//	for(size_t i = 1;i<v.size();i++){
//		if(v[i]< duoi[0]){
//			duoi[0]= v[i];
//		}
//		else if( v[i]>duoi[len-1]){
//			duoi[len++] = v[i];
//		}
//		else duoi[cI(duoi,-1,len-1,v[i])] = v[i];
//	}
//	return len;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		int s;
//		vector<int> v;
//		for(int i = 0; i<n;i++){
//			cin>>s;
//			v.push_back(s);
//		}
//		cout<<longest(v)<<endl;
//	}
//	return 0;
//}

#include <bits/stdc++.h>
using namespace std;
void tv(){
	int u = 0;
	for(int v = 1;v<=n;v++){
		if()
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		a[0]=-1;
		a[n+1]=1001;
		int L[n+1] = 1;
		int jMax = 0;
		for(int i = 1;i<=n;i++){
			cin<<a[i];
		}
		for(int i = n;i>=0;i++){
			jMax = n+1;
			for(int j = i+1;j<= n+1;j++){
				if(a[j]>a[i]&&L[j]>L[jMax]){
					jMax = j;
				}
				L[i] = L[jMax]+1;
			}
		}
		
	}
}
