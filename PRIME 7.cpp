#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		vector<int> v;
		v.clear();
		for(int i=2;i<=n;i++){
			while(n%i==0){
				v.push_back(i);
				n/=i;
			}
		}
		if(v.size()==3&&(v[0]!=v[1]&&v[1]!=v[2])){
			cout<<1<<endl;
		}
		else
			cout<<0<<endl;
	}
	return 0;
}
