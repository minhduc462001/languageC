#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		vector<int> v1;
		vector<int> v2;
		
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(n%2==0){
			for(int i = 0;i<n;i++){
			if(i<n/2){
				v1.push_back(a[i]);
			}
			else v2.push_back(a[i]);
			
			}
			for(int i = 0;i<n/2;i++){
			
			if(i==n/2){
				cout<<v1[i];
			}
			else{
				cout<<v1[i]<<" "<<v2[i]<<" ";
				}
			}
			cout<<endl;
		}
		
		else{
			for(int i = 0;i<n;i++){
				if(i<n/2+1){
					v1.push_back(a[i]);
				}
				else v2.push_back(a[i]);
			}
		
		//1 2 3 4 5 6 7
		//0 5
		//1 5 2 6 3 7 4
		//3 2 4 5 2
		//2 2 3 4 5
		//0 3 1 4 2
		//2 4 2 5 3
		for(int i = 0;i<n/2+1;i++){
			
			if(i==n/2){
				cout<<v1[i];
			}
			else{
				cout<<v1[i]<<" "<<v2[i]<<" ";
			}
		}
		cout<<endl;
	}
}
	return 0;
}

