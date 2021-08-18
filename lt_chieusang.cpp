#include<bits/stdc++.h>
using namespace std;
struct mark_light{
	int index;
	bool o_f;
};
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int a[m];
	mark_light ml[n+1];
	for(int i=1;i<=n;i++){
		ml[i].index = i;
		ml[i].o_f = false;
	}
	for(int i = 0;i<m;i++){
		cin>>a[i];
		ml[a[i]].o_f = true;
	}
	if(k==0){
		cout<<n-m<<endl;
		return 0;
	}
//	int dem = 0;
//	int value = 0;
//	if(a[0]-k>=1){
//		value = a[0]-k-1;
//		dem+=value; 
//		
//	}
//	cout<<dem<<endl;
//	if(a[m-1]+k<n){
//		value = n/(a[m-1]+k)-1;
//		if(value>=0)
//			dem+=value;
//		
//	}
//	cout<<dem<<endl;
//	cout<<"....................."<<endl;
//	for(int i = 0;i<m-1;i++){
//		value = a[i+1]/(a[i]+k)-1;
//		cout<<value<<" ";
//		dem+=value;
//	}
//	cout<<endl;
//	cout<<dem<<endl;
	int mark = 1;

	int res = 0;
	
	while(k+mark<=n){
		int dem = 0;
		for(int i = mark;i<=k+mark;i++){
			if(ml[i].o_f == true){
				dem = 1;
			}
		}
		res += dem;
		mark++;
	}
	cout<<n-1-res-k-(int)m/(k+1)<<endl;
	return 0;
}

