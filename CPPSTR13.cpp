#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int k;
		cin>>k;
		int res = 0;
		int az[26];
		for(int i = 0;i<s.length();i++){
			int dem = 0;
			// dua cac gia tri mang az ve 0
			memset(az,0,26);
			
			for(int j = i;j<s.length();j++){
				//dem so phan tu khac nhau : dem
				if(az[s[j]-'a']==0){
					dem++;
				}
				//char xuaats hieenj trong az tangw
				az[s[j]-'a']++;
				
				if(dem == k){
					res++;
				}
				// neu dem lon hon k ko thoa man yeeu cau
				if(dem>k) break;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

