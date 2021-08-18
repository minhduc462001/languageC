#include<bits/stdc++.h>
using namespace std;
bool dk(string s1, string s2){
	string x = s1.append(s2);
	string y = s2.append(s1);
	return x.compare(y)>false?true:false;
}
void sosanh(vector<string> v){
	stable_sort(v.begin(),v.end(),dk);
	for (int i = 0; i < v.size(); i++)
        cout << v[i];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		vector<string> v;
		for(int i = 0;i<n;i++){
			string s;
			cin>>s;
			v.push_back(s);
		}
		sosanh(v);
		cout<<endl;
//		string Max;
//		vector<string> so;
//		for(int i = 0;i<n-1;i++){
//			int r1 = v[i].length()-1, index = i;
//			Max = v[i];
//			for(int j = 1;j<n;j++){
//				int l = 0, r2 = v[j].length()-1;
//				int Min = min(r1,r2);
//				while(l<Min){
//					if(v[i][l]>v[j][l]){
//						Max = v[i];
//						index = i;
//						break;
//					}
//					else if(v[i][l]<v[j][l]){
//						Max = v[j];
//						index = j;
//						break;
//					}
//					else{
//						l++;
//					}
//				}
//			}
//			v[index] = INT_MIN;
//			so.push_back(Max);
//		}
//		for(int i = 0;i<n;i++){
//			cout<<so[i];
//		}
//		cout<<endl;
	}
	return 0;
	
}

