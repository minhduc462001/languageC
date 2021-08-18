#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		set<int> b;
		set<int> e;
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				cin>>a[i][j];
				if(i==0){
					b.insert(a[i][j]);
				}
			}
		}
		
		for(int i = 1;i<n;i++){
			for(int j = 0;j<n;j++){
				for(set<int>::iterator it = b.begin();it!=b.end();it++){
					if(a[i][j]==*it){
						e.insert(*it);
					}
				}
			}
			b.clear();
			b=e;
			e.clear();
		}
//		for(set<int>::iterator it = b.begin();it!=b.end();it++){
//			cout<<*it<<" ";
//		}
		cout<<b.size()<<endl;
	}
	return 0;
}

