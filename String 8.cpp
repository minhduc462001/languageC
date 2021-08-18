#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string n;
		cin>>n;
		
		vector<int> v;
		int len = n.length();
		int i = 0,so = 0;
		while(i<=len){
			if(n[i]>='0'&&n[i]<='9'){
				so = so*10 + (int)(n[i]-'0');
				i++;
				continue;
			}
			v.push_back(so);
			so = 0;
			i++;
		}
		int res = 0;
		for(int i = 0;i<v.size();i++){
			res+= v[i];
		}
		cout<<res<<endl;
	}
	return 0;
}
// 48 -> 57
