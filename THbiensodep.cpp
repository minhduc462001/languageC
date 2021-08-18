#include<bits/stdc++.h>
using namespace std;
int th1(string s1){
	int dem = 0;
	for(int i = 0;i<s1.length();i++){
		if(s1[i]=='6'||s1[i]=='8'){
			dem++;
		}
	}
	if(dem==s1.length()) return 1;
	return 0;
}
int th2(string s2, string s3){
	int a[3];
	int b[2];
	for(int i = 0;i<s2.length();i++){
		a[i] = s2[s2.length()-1-i] - '0';

	}
	for(int i = 0;i<s3.length();i++){
		b[i] = s3[s3.length()-1-i] - '0';

	}
	if(b[0]<a[2]) return 0;
	
	if(a[0]==a[1]-1&&a[2]==a[1]+1){
		if(b[1]==b[0]+1) return 1;
	}
	return 0;
}
int th3(string s2, string s3){
	if(s2[0]==s2[1]&&s2[1]==s2[2]){
		if(s3[1]==s3[0]){
			return 1;
		}
	}
	return 0;
}
int th4(string s1){
	int dem = 1;
	for(int i = 0;i<s1.length()-1;i++){
		if(s1[i]==s1[i+1]){
			dem++;
		}
	}
	if(dem==s1.length()) return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string s1,s2,s3;
		for(int i = 5;i<s.length();i++){
			if(s[i]=='.'){
				continue;
			}
			s1.insert(0,1,s[i]);
			if(i<8){
				s2.insert(0,1,s[i]);
			}
			if(i>8){
				s3.insert(0,1,s[i]);
			}
		}
		if(th1(s1)) {
			cout<<"YES"<<endl;
			continue;
		}
		if(th2(s2,s3)) {
			cout<<"YES"<<endl;
			continue;
		}
		if(th3(s2,s3)) {
			cout<<"YES"<<endl;
			continue;
		}
		if(th4(s1)) {
			cout<<"YES"<<endl;
			continue;
		}
		cout<<"NO"<<endl;
	}
	return 0;
}

