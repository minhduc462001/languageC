#include<iostream>  
using namespace std;


int main(){
	int n, t;
	cin>>n;
	while(n--){
		cin>>t;
		int a[t];
		int b[1000000]={1};
		for(int i=0; i<t;i++){
			cin>>a[i];
		}
		int max = 0, tam = 0;
		int count;
		for(int i = 0;i<t;i++){
			count = 0;
			
			for(int j = 0; j<t;j++){
				if(a[i]==a[j]) count++;
			}
			
			if(max<count){
					tam = i;
					max = count;
			}
		}
		if(max>t/2) cout<<a[tam]<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;	
}


