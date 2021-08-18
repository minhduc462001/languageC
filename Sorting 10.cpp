#include <bits/stdc++.h>
using namespace std;
struct cmp{
	bool operator() (int a,int b) {return a<b;}
};
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		set<int,cmp> s;
		s.clear();
		unsigned long long a[n];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		for(long long i = 0;i<n;i++){
			while(a[i]>0){
				int k = a[i]%10;
				s.insert(k);
				a[i]/=10;
			}
		}
		set<int>::iterator itr;
		for(itr = s.begin();itr!=s.end();itr++){
			cout<<*itr<<" ";
		}
		cout<<endl;
	}
	return 0;
}
