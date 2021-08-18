#include<bits/stdc++.h>
using namespace std;
int chuyen_so(char c){
    return c-'0';
} 
char chuyen_char(int n){
	return (char) (n+48);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string n;
		cin>>n;
//		vector<int> v;
//		string res = "";
//		for(int i = 0;i<n.length();i++){
//			v.push_back(chuyen_so(n[i]));
//		}
//		bool breakFor = false;
//		for(int i = v.size()-1;i>0;i--){
//			if(v[i]<v[i-1]&&v[i]<=v[1]){
//				breakFor = true;
//				swap(v[i],v[i-1]);
//				break;
//			}
//		}
//		if(breakFor){
//			for(int i = 0;i<v.size();i++){
////				res.insert(0,1,chuyen_char(v[v.size()-1-i]));
//				cout<<v[i];
//			}
////			cout<<res;
//			cout<<endl;
//		}
//		else cout<<"-1"<<endl;
		int len = n.length();
		int index = -1;
		
		for(int i = len-2;i>=0;i--){
			if(n[i]>n[i+1]){
				index = i;
				break;
			}
		}
		int k = -1;
		for(int i = len-1;i>index;i--){
			if(n[i]<n[index]){
				if(k==-1){
					k = i;
				}
				else if(n[i]>= n[k]){
					k = i;
				}
			}
		}
		if(index == -1){
			cout<<-1<<endl;
			continue;
		}
		if(k != -1){
			swap(n[index],n[k]);
			cout<<n<<endl;
		}
		else cout<<-1<<endl;
//		int i = n-1;
//		int l = 0, r = n-1;
//		for(;i>=0;i--){
//			if(a[i-1]>a[i]){
//				for(int j = i;j<n;j++){
//					if(a[j]<a[j-1]){
//						if(a[j]>a[r]){
//							
//						}
//					}
//				}
//			}
//		}
//		for()
		
	}
	return 0;
}
