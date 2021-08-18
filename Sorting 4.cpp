#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		vector<int> v1;
		vector<int> v2;
		vector<int> Union;
		vector<int> Intersection;
		for(int i = 0;i<n;i++){
			cin>>a[i];
			v1.push_back(a[i]);
		}
		for(int i = 0;i<m;i++){
			cin>>b[i];
			v2.push_back(b[i]);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),
		back_inserter(Union));
		set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),
		back_inserter(Intersection));
		for(int i = 0;i<Union.size();i++){
			cout<<Union[i]<<" ";
		}
		cout<<endl;
		for(int i = 0;i<Intersection.size();i++){
			cout<<Intersection[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
