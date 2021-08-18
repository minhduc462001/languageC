#include<bits/stdc++.h>
using namespace std;
void xoaymt(int n, int m, int a[100][100]){
	int H = n, C = m;
	int cot = 0, hang = 0;
	int p =0, c = 0;
	
	while(cot<m&&hang<n){
		// neu m = 1, n = 1 dung luon
		if(cot+1==m||hang+1==n) break;
		// gan gia tri a[1][0] cho p
		p = a[hang+1][cot];
		// gan lai gia tri tu 0 ... cho a o hang dau
		for(int i = cot;i<m;i++){
			c = a[hang][i];
			a[hang][i] = p;
			p = c;
		}
		// het hang 0 tang hang + 1
		hang++;
		// gan cac gia tri doc o cot cuoi cung m-1
		for(int i = hang;i<n;i++){
			c=a[i][m-1];
			a[i][m-1] = p;
			p = c;
		}
		// thu nho cot matrix
		m--;
		//kiem tra xem hang<m ko tranh bi trung gt
		if(hang<n){
			// gan cac gia tri hang cuoi
			for(int i = m-1;i>= cot;i--){
				c = a[n-1][i];
				a[n-1][i] = p;
				p = c;
			}
			// thu nho hang matrix
			n--;
		}
		if(cot<m){
			// gan cot dau
			for(int i = n-1;i>= hang;i--){
				c = a[i][cot];
				a[i][cot] = p;
				p = c;
			}
			cot++;
		}
		
	}
	for(int i= 0;i<H;i++){
		for(int j = 0;j<C;j++){
			cout<<a[i][j]<<" ";
		}
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[100][100];
		
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int H = n, C = m;
		xoaymt(n,m,a);
	}
	return 0;
}
