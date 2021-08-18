#include<bits/stdc++.h>

using namespace std;
bool snt(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	else 
		for(int i = 2;i<=sqrt(n);i++)
			if(n%i==0)
				return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		v.clear();
		for(int i=2;i<=n;i++){
			if(snt(i)) v.push_back(i);
		}
		bool breakFor = true;
		for(int i=0;i<v.size()-1;i++){
			for(int j = i+1;j<v.size();j++){
				if(v[i]+v[j]==n||v[i]*2==n){
					if(v[i]+v[i]==n){
						cout<<v[i]<<" "<<v[i];
						breakFor = false;
						break;
					}
					else{
						cout<<v[i]<<" "<<v[j];
						breakFor = false;
						break;
					}
				}
			}
			if(!breakFor) break;
		}
		cout<<endl;
	}
	return 0;
}
