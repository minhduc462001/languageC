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
		int L,R;
		cin>>L>>R;
		int index = 0;
		
		bool breakFor = false;
		
		for(int i = L;i<R;i++){	
			if(a[i+1]<a[i]){
				breakFor = true;
				index = i;
				break;
			}
		}
		if(breakFor){
			breakFor = false;
			while(index<a[R]){
				if(a[index]<a[index+1]){
					breakFor = true;
					cout<<"No";
					break;
				}
				index++;
			}
			if(!breakFor) cout<<"Yes";
			cout<<endl;
			
		}
		else cout<<"Yes"<<endl;
		
	}
	return 0;
}
