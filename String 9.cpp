#include<bits/stdc++.h>
using namespace std;
int chuyenso(char c){
	return (int) (c-'0');
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string s;
		cin>>s;
		vector<char> v;
		vector<int> v1;
		int so = 0;
		int l = s.length();
		
		for(int i = 0;i<l;i++){
			if(s[i]>='0'&&s[i]<='9'){
				v.push_back(s[i]);
				so = so*10 + chuyenso(s[i]);
			}
			else{
			
				v1.push_back(so);
				so = 0;
			}
		}
		sort(v1.begin(),v1.end());
		cout<<v1.back()<<endl;
	}
	return 0;
}
