#include<bits/stdc++.h>
using namespace std;
int chuyenso(char c){
	return (int)(c-'0');
}
int dem(string s, int m){
	int dem = 0;
	// ktra tung phan tu
	for(int i = 0;i<s.length();i++){
		int so = 0;//12345
		for(int j = i;j<s.length();j++){
			so = so*10+chuyenso(s[j]);
			so = so%m;
			if(so==0){
				dem++;
			}
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int chia8 = dem(s,8);
		// so co tu 3 chu so tro len thi co th
		// chia het cho 3, tong 3 so la 24
		// => check so co chia het cho 24 ko
		int chia24 = dem(s,24);
		cout<<chia8-chia24<<endl;
	}
	return 0;
}
