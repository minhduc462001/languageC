#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	vector<int> c;
	vector<int> l;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			c.push_back(a[i]);
		}
		else l.push_back(a[i]);
	}
	sort(c.begin(),c.end());
	sort(l.begin(),l.end(),cmp);
//	for(int i = 0;i<n/2;i++){
//		cout<<l[i];
//	}
//	cout<<endl;
//	for(int i = 0;i<n/2;i++){
//		cout<<c[i];
//	}
//	if(n%2==0){
//		if(c.size)
//		for(int i = 0;i<n/2;i++){
//			cout<<l[i]<<" "<<c[i]<<" ";
//		}
//	}
//	else{
//		if(c.size()>l.size()){
//			for(int i = 0;i<n/2-1;i++){
//				cout<<l[i]<<" "<<c[i]<<" ";
//			}
//			cout<<c.back();
//		}
//		else{
//			for(int i = 0;i<n/2-1;i++){
//				cout<<l[i]<<" "<<c[i]<<" ";
//			}
//			cout<<l.back();
//		}
//	}
	int j = 0, k =0;
	for(int i = 0;i<n;i++){
		if(a[i]%2==0){
			cout<<c[j]<<" ";
			j++;
		}
		else{
			cout<<l[k]<<" ";
			k++;
		}
	}
	return 0;
}


