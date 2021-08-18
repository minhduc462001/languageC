#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int c[10] = {0};
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char a;
		while(n--){
			cin>>a;
			if(a=='1'){
				continue;
			}
			else if(a=='2'||a=='3'||a=='5'||a=='7'){
				c[a-'0']++;
			}
			else if(a=='4'){
				c[3]++;
				c[2]+=2;
			}
			else if(a=='6'){
				c[5]++;
				c[3]++;
			}
			else if(a=='8'){
				c[7]++;
				c[2]+=3;
			}
			else if(a=='9'){
				c[7]++;
				c[3]+=2;
				c[2]++;
			}
		}
		
		for(int i = 9;i>1;i++){
			while(c[i]>0){
				cout<<i;
				c[i]--;
			}
		}
		cout<<endl;
	}
    return 0;
}
