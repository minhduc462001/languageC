#include<bits/stdc++.h>

using namespace std;
void xuatmang(vector<int> a){
    for(int i = 0;i<a.size();i++){
    	cout<< a.at(i) <<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,j;
		cin>>n;
		
		int a[n];
		for(int i = 0; i<n;i++){
			cin>>a[i];
		}
		vector<int> m;
		int tmp;
		for(int i = 0;i<n;i++){
			for(j = i+1;j<n;j++){
				if(a[i]<=a[j]) break;
			}
			if(j == n) m.push_back(a[i]);
		}
		xuatmang(m);
	}
	return 0;
}
