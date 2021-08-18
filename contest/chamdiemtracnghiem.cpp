#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		char d101[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
		char d102[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
		int md;
		cin>>md;
		cin.ignore();
		string kq;
		getline(cin,kq);
		int kqd = 0;
		int k = 0;
		if(md==101)
		for(int i = 0;i<15;i++){
				if(kq[k]==d101[i]){
					kqd++;
				}
				k+=2;
		}
		if(md==102){
			for(int i = 0;i<15;i++){
				if(kq[k]==d102[i]){
					kqd++;
				}
				k+=15;
			}
		}
		cout<<fixed;
		cout<<setprecision(2)<<(float)kqd*10/15<<endl;
	}
	return 0;
}

