#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int arr[n]={0};
		for (int x = 2; x*x <= n; x++)
  			if (arr[x] == 0) {
    			arr[x] = x;
   	 			for(int y = x*x; y <= n; y += x)
    	  			if (arr[y] == 0)
        				arr[y] = x;
			}

		for (int x = 3; x <= n; x += 2)
  			if (arr[x] == 0)
    			arr[x] = x;
    	
    	for(int i = 0;i<n;i++){
    		cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
