#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string n;
		getline(cin,n);
		int l = n.length();
		for(int i = l-2;i>=0;i--){
			if(n[i] == 32){
				int k = i+1;
				while(1){
					if(n[k]!=32||k!=l){
						cout<<n[k];
						k++;
					}
					if(n[k]==32||k==l){
						cout<<" ";
						break;
					}
				}
			}
		}
		for(int i = 0;i<l;i++){
			if(n[i]==32){ 
				break;
			}
			else cout<<n[i];
		}
		cout<<endl;
	}
	return 0;
}
