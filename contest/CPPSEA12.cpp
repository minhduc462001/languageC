//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long n,x;
//		cin>>n>>x;
//		long long a[n];
//		for(long long i = 0;i<n;i++){
//			cin>>a[i];
//		}
//		sort(a,a+n);
//		
//		long long l = 0, r = n-1;
//		bool breakW = false;
//		while(l<r){
//			if(a[r]-a[l]==x){
//				breakW = true;
//				cout<<1<<endl;
//				break;
//			}
//			if(a[n-1]-a[0]<x){
//				cout<<-1<<endl;
//				break;
//			}
//			if(a[r]-a[l]>x){
//				l++;
//			}
//		}
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long n,x;
//		cin>>n>>x;
//		long long a[n];
//		for(long long i = 0;i<n;i++){
//			cin>>a[i];
//		}
//		sort(a,a+n);
//		
//		if(x+a[0]>a[n-1]||x>=a[n-1]) {
//			cout<<-1<<endl;
//			continue;
//		}
//		int l = 0;
//		bool check = true;
//		while(l<n-1){
//			long long tong = a[l]+x;
//			
//			for(int i = l+1;i<n;i++){
//				if(tong == a[i]) {
//					cout<<1<<endl;
//					l = n+1;
//					check = false;
//					break;
//				}
//			}
//			l++;
//		}
//		if(check){
//			cout<<-1<<endl;
//		}
//	}
//}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		set<int> s;
		for(int i = 0;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		bool breakFor = false;
		for(set<int>::iterator it=s.begin();it!=s.end();it++){
			if(s.find(*it+x)!=s.end()){
				breakFor = true;
				cout<<1<<endl;
				break;
			}
		}
		
		if(!breakFor) cout<<-1<<endl;
	}
}
