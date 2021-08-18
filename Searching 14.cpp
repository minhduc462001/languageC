//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		int a[n];
//		for(int i = 0;i<n;i++){
//			cin>>a[i];
//		}
//		bool breakFor = true;
//		for(int i = 0;i<n-1;i++){
//			for(int j = i+1;j<n;j++){
//				if(a[i]==a[j]){
//					breakFor = false;
//					cout<<a[i]<<endl;
//					break;
//				}
//			}
//			if(!breakFor) break;
//		}
//		if(breakFor) cout<<-1<<endl;
//	}
//	return 0;
//}
#include<iostream> 
using namespace std; 
bool check(long long mang[], int a, int b) {
	for (int i = a; i < b; i++) {
		for (int j = i + 1; j < b; j++) {
			if (mang[i] == mang[j]) return false; 
		}
	}
	return true;
}
int	main() {
	int t;
	cin>>t;
	while (t--) {
		long long n;
		cin>>n;
		long long mang[n + 1];
		for(int i = 0;i<n;i++){
 			cin>>mang[i];
		}
 		bool c = false;
 		for (int i=0;i<n;i++){
 			for (int j = i + 1;j<n;j++) {
  				if (mang[j] == mang[i] && check(mang, i, j)) {
   					c = true;
    				cout << mang[i] << endl;
    				break;
    			}
			}
			if (c) break;
		}
	 	if (!c) cout << -1 << endl;
	}
	return 0;
}


