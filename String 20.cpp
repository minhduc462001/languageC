#include<bits/stdc++.h>
using namespace std;
void string_reverse(char str[]) {
   int i, j, len;
   char ch;
 
   j = len = strlen(str) - 1;
   i = 0;
 
   while(i < j) {
      ch = str[j];
      str[j] = str[i];
      str[i] = ch;
      i++;
      j--;
   }
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string n;
		getline(cin,n);
		string res="";
		int len = n.length();
		int k = len;
		int index;
		for(int i = len-1;i>=0;i--){
			int m = 0;
			if(n[i]==' '){
				index = i;
				while(i<len-1){
					m++;
					res.push_back(n[i+1]);
					i++;
				}
			}
			len= len-m;
			i = index-1;
		}
		cout<<res<<endl;
	}
	return 0;
}
