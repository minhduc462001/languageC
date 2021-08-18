#include<bits/stdc++.h>
using namespace std;
const int c = 1e5+1;
struct capso{
	int so;
	int fre;
};
bool cmp(capso a, capso b){
	if(a.fre!=b.fre) return (a.fre>b.fre);
	else return(a.so<b.so);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[c] = {0};
		for(int i = 0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		capso cs[n];
		int k = 0;
		for(int i = 0;i<c;i++){
			if(b[i]>0){
				cs[k].so = i;
				cs[k].fre = b[i];
				k++;
			}
		}
		stable_sort(cs,cs+k,cmp);
		for(int i = 0;i<=k;i++){
			for(int j = 0;j<cs[i].fre;j++){
				cout<<cs[i].so<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

