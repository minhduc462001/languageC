#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		vector<long long> a, b, c, d, e;
		for(int i = 0;i<n1;i++){
			long long k;
			cin>>k;
			a.push_back(k);
		}
		for(int i = 0;i<n2;i++){
			long long k;
			cin>>k;
			b.push_back(k);
		}
		for(int i = 0;i<n3;i++){
			long long k;
			cin>>k;
			c.push_back(k);
		}
		
		set_intersection(a.begin(),a.end(),
							b.begin(),b.end(),
								back_inserter(d));
		set_intersection(d.begin(),d.end(),
							c.begin(),c.end(),
								back_inserter(e));
		if(e.size==0){
			cout<<-1<<endl;
			continue;
		}
		sort(e.begin(),e.end());
		for(int i = 0;i<e.size();i++){
			cout<<e[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
