#include <bits/stdc++.h> 
using namespace std; 
  
 
int chuyen_so(char c){
    return (int)(c-'0');
} 
char chuyen_char(int n){
	return (char) (n+'0');
}
void duavecungdodai(string &x, string &y){
	int lenX = x.length();
	int lenY = y.length();
	if(lenX>lenY){
		y.insert(0,lenX-lenY,'0');
	}
	else if(lenX<lenY){
		x.insert(0,lenY-lenX,'0');
	}
}
string tong(string x, string y){
	string s = "";
	duavecungdodai(x,y);
	int lenX = x.length();
	int temp = 0;
	for(int i = lenX-1;i>=0;i--){
		temp = chuyen_so(x[i])+chuyen_so(y[i]) +temp;
		s.insert(0,1,chuyen_char(temp%10));
		temp = temp/10;
	}
	if(temp>0){
		s.insert(0,1,chuyen_char(temp));
	}
	return s;
}
string nhan1(char c, string x){
	string s = "";
	int temp = 0;
	for(int i = x.length()-1;i>=0;i--){
		temp = chuyen_so(c) * chuyen_so(x[i])+temp;
		s.insert(0,1,chuyen_char(temp%10));
		temp/=10;
	}
	if(temp>0){
		s.insert(0,1,chuyen_char(temp));
	}
	return s;
}
string nhan(string x, string y){
	string s = "";
	int lenX = x.length();
	int temp = 0;
	string s1[lenX];
	for(int i = lenX-1;i>=0;i--){
		s1[i] = nhan1(x[i],y);
		s1[i].insert(s1[i].length(),lenX-1-i,'0');
		s= tong(s,s1[i]);
	}
	return s;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string x;
		cin>>x;
		cin.ignore();
		string y;
		cin>>y;
		
		string s = nhan(x,y);
		
    	cout<<s<<endl;
	}
    return 0; 
} 
