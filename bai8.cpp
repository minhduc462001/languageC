#include<iostream>
#include<vector>
using namespace std;

void xuatmang(vector<int> a){
    for(int i = 0;i<a.size();i++){
    	cout<< a.at(i) <<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		int a[n];
		vector<int> b;
		for(int i = 0; i<n;i++){
			cin>>a[i];
		}
		for(int i = d;i<n;i++){
			b.push_back(a[i]);
		}
		for(int i = 0;i<d;i++){
			b.push_back(a[i]);
		}
		
		xuatmang(b);
	}
	return 0;
}
