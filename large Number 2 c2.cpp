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
string tru(string x, string y){
	string s = "";
	duavecungdodai(x,y);
	int lenX = x.length();
	int temp = 0;
	for(int i = lenX-1;i>=0;i--){
//		temp = chuyen_so(x[i])-chuyen_so(y[i]) + temp;
//		s.insert(0,1,chuyen_char(temp%10));
//		temp = temp/10;
		if(chuyen_so(x[i])<chuyen_so(y[i])){
			temp = chuyen_so(x[i])+10-chuyen_so(y[i]);
			
		}
	}
	if(temp>0){
		s.insert(0,1,chuyen_char(temp));
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
		
		string s = tru(x,y);
		
    	cout<<s<<endl;
	}
    return 0; 
} 
