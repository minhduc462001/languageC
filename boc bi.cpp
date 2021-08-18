#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,k;
	cin>>a>>b>>c>>k;
	int d[3]={a,b,c};
	sort(d,d+3);
	int tam=0;
	int fre = 3;
	for(int i = 0;i<2;i++){
		if(d[i]<k-1){
			tam +=d[i];
			fre--;
		}
	}
	cout<<((k-1)*fre+tam+1);
	return 0;
}
