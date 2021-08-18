#include<bits/stdc++.h>
using namespace std;
int chuyenso(char c){
	return (int)(c-'0');
}
char chuyenchu(int n){
	return (char)(n+'0');
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string s;
		cin>>s;
		
		
		sort(s.begin(),s.end());
		string k = "";
		int l = s.length();
		int sum = 0;
		int dem = 0;
		for(int i = 0;i<l;i++){
			if(s[i]>=48&&s[i]<=57){
				sum = sum + chuyenso(s[i]);
				dem++;
			}
			else break;
		}
		if(sum<10){
			k.insert(0,1,chuyenchu(sum));
		}
		else {
			ostringstream convert;
			convert << sum;
			k = convert.str();
		}
		s.replace(0,dem,"");
		s.append(k);
		cout<<s<<endl;
	}
}
