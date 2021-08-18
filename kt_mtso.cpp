#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int row,col;
		cin>>row>>col;
		int a[row][col];
		
		for(int i = 0;i<row;i++){
			for(int j = 0;j<col;j++){
				cin>>a[i][j];
			}
		}
		int gt = 0;
		int d = 0;
		int h = row-1;
		int c = col -1;
		while(gt<=row*col){
			for(int i = d;i<=c;i++){
				cout<<a[d][i]<<" ";
				gt++;
			}
			
			for(int i = d+1;i<=h;i++){
				cout<<a[i][c]<<" ";
				gt++;
			}
			
			if(d!= h){
				for(int i = c-1;i>=d;i--){
					cout<<a[h][i]<<" ";
					gt++;
				}
			}
			if(d!=c){
				for(int i = h-1;i>d;i--){
					cout<<a[i][d]<<" ";
					gt++;
				}
			}
			h--;
			c--;
			d++;
		}
		cout<<endl;
	}
	return 0;
}


