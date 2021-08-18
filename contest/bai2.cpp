#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, s;
		cin>>n>>s;
		
		int a[6]={1,2,3,4,5,6};
		vector<int> xs;
		
		
		int frequency = 0;
		while(n--){
			for(int i = 0;i<6;i++){
				xs.push_back(a[i]);
			}
		}
		
		
		
		std::cout<<frequency<<endl;
	}
}
