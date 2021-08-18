#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		long long a[n];
		
		map<long long,int> name_map;
		std::map<long long,int>::iterator it;
		
		for(int i = 0; i<n;i++){
			cin>>a[i];
		}
		bool check = true;

		for(int i = 0;i<n;i++){
			int dem = 1;
			for(int j = i+1;j<n;j++){
				if(a[i]==a[j]){
					dem++;
				}
			}
			it= name_map.find(a[i]);
			if(it == name_map.end()) continue;
			else name_map[a[i]]= dem;
		}
	
		for(int i = 0;i<name_map.size();i++){
			cout<<name_map[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
