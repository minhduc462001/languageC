//#include <bits/stdc++.h>
//using namespace std;
//bool modPrimeMul(int a, int x, int m){
//	int res = ((x%m)*(a%m))%m;
//	if(res==1) return true;
//	return false;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long a,m;
//		cin>>a>>m;
//		bool breakFor = true;
//		for(int i = 1;i<m-1;i++){
//			if(modPrimeMul(a,i,m)) {
//				breakFor = false;
//				cout<<i<<endl;
//				break;
//			}
//		}
//		if(breakFor) cout<<"-1"<<endl;
//	}
//	return 0;
//}
#include<iostream>
using namespace std;

int x(int a, int m){
    for(int i=1; i<m; i++)
    	if((a*i)%m==1) return i;
    return -1; 
} 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, m;
        cin>>a>>m; 
        cout<<x(a, m)<<endl; 
        
    } 
    return 0;
}
