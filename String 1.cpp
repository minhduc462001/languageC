//#include<bits/stdc++.h>
//using namespace std;
//
//bool isPangram(string sentence)
//{
//    vector <int> a(256, 0);
//    for (int i=0; i<sentence.length(); i++)
//        a[sentence[i]]++;
//    for (int i = 65; i <= 90; i++) a[i + 32] += a[i];
//    for (int i = 97; i <= 122; i++)
//        if (a[i] <= 0)
//            return false;
//    return true;
//}
//
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		cin.ignore();
//		string sentence;
//		cin>>sentence;
//		int k;
//		cin>>k;
//		
//		
//	}
//}

#include <iostream> 
using namespace std; 
int main() { 
	int t; 
	cin >> t; 
	while(t--) { 
		cin.ignore();
		string s; 
		int k; 
		cin >> s >> k; 
		bool check[1000] = {false}; 
		for(int i = 0; i < s.size(); i++) 
			check[s[i]] = true; 
		int dem = 0; 
		for(int i = 'a'; i <= 'z'; i++) 
			if(!check[i]) dem++; 
		if(k>=dem) cout<<1<<endl; 
		else cout<<0<<endl; 
	} 
	return 0; 
}
