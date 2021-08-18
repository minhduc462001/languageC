#include<bits/stdc++.h>
#include <iterator>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		
		vector<long long> a,b,c;
		vector<long long> temp,temp1;
		a.clear();
		b.clear();
		c.clear();
		temp.clear();
		
		for(int i=0;i<n;i++){
			long long s;
			cin>>s;
			a.push_back(s);
		}
		for(int i=0;i<m;i++){
			long long s;
			cin>>s;
			b.push_back(s);
		}
		for(int i=0;i<k;i++){
			long long s;
			cin>>s;
			c.push_back(s);
		}
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
		set_intersection(a.begin(),a.end(),b.begin(),b.end(), 
					back_inserter(temp));
		
		set_intersection(c.begin(),c.end(),temp.begin(),temp.end(), 
					back_inserter(temp1));
		if(temp1.size()!= 0){
			for(int i =0;i<temp1.size();i++){
				cout<<temp1[i]<<" ";
			}
			cout<<endl;
		}			
		else cout<<"NO"<<endl;
	}
	return 0;
}
