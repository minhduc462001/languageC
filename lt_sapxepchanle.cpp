#include<bits/stdc++.h>
using namespace std;

//int main(){
//	int n;
//	cin>>n;
//	int a[n];
//	vector<int> v1;
//	vector<int> v2;
//	for(int i = 0;i<n;i++){
//		cin>>a[i];
//		if(a[i]%2==0){
//			v1.push_back(a[i]);
//			v2.push_back(0);
//		}
//		else{
//			v2.push_back(a[i]);
//			v1.push_back(0);
//		}
//	}
//	if(v1[0]==0) v1.erase(v1.begin()+0);
//	reverse(v2.begin(), v2.end());
//	if(v2[0]==0) v2.erase(v2.begin()+0);
//	for(int i = 0;i<n;i+=2){
//		if(v1[i]==0){
//			v1[i] = -1;
//		}
//		if(v2[i]==0){
//			v2[i] = -1;
//		}
//	}
//	for(int i = 0;i<v1.size();i++){
//		if(v1[i]==0){
//			v1.erase(v1.begin()+i);
//		}
//	}
//	for(int i = 0;i<v2.size();i++){
//		if(v2[i]==0){
//			v2.erase(v2.begin()+i);
//		}
//	}
//
//	for(int i = 0, j = 0;i<v2.size()&&j<v1.size();i++,j++){
//		// i chan j le
//		if(v1[i]==-1&&i+1!=v2.size()){
//			cout<<v2[i]<<" "<<v2[i+1]<<" ";
//			i++;
//		}
//		else if(v2[i]==-1&&j+1!=v1.size()){
//			cout<<v1[j]<<" "<<v1[j+1]<<" ";
//			j++;
//		}
//		else if(v2[i]!=-1&&v1[j]!=-1)
//			cout<<v2[i]<<" "<<v1[j]<<" ";
//		else if(j==v1.size()){
//			cout<<v2[i]<<" ";
//		}
//		else cout<<v1[j]<<" ";
//	}
//	cout<<endl;
//	return 0;
//}



// 1 2 3 4 5 6 7 7 9 6
// 1 0 3 0 5 0 7 7 9 0
// 0 2 0 4 0 6 0 0 0 6

// 9 7 7 5 3 1
// 2 4 6 6
// 9 2 7 4 7 6 5 3 1 6

// 1 2 3 4 5 6 7 8 9
// 1 3 5 7 9
// 2 4 6 8
// 9 2 7 4 5 6 3 8 1

// 1 2 3 4 5 6
// 1 3 5
// 2 4 6

int main(){
	int n;
	cin>>n;
	int a[n];
	vector<int> v1;
	vector<int> v2;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			v1.push_back(a[i]);
		}
		else{
			v2.push_back(a[i]);
		}
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int l = v2.size()-1;
	int c = 0;
	for(int i = 0;i<n;i++){
		if(a[i]%2!=0){
			cout<<v2[l]<<" ";
			l--;
		}
		else {
			cout<<v1[c]<<" ";
			c++;
		}
	}
	return 0;
}
