#include<bits/stdc++.h>
using namespace std;
//smallest window
string findString(string s1, string s2){
	int len1 = s1.length();
	int len2 = s2.length();
	
	if(len1<len2) return "-1";
	
	int hash_s1[256] = {0};
	int hash_s2[256] = {0};
	for(int i = 0;i<len2;i++){
		hash_s2[s2[i]]++;
	}
	int start = 0, start_index = -1, lenMin = INT_MAX; int count = 0;
	for(int i = 0;i<len1;i++){
		hash_s1[s1[i]]++;
		if(hash_s1[s1[i]]<=hash_s2[s1[i]]) count++;
		
		if(count == len2){
			while(hash_s1[s1[start]]>hash_s2[s1[start]]||
				hash_s2[s1[start]]==0){
					if(hash_s1[s1[start]]>hash_s2[s1[start]])
						hash_s1[s1[start]]--;
					start++;
			}
			int len_window = i - start + 1;
			
            if (lenMin > len_window) {
                lenMin = len_window;
                start_index = start;
            }
		}
		
	}
	if(start_index == -1) return "-1";
	return s1.substr(start_index ,lenMin);
	
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		
		string s1;
		cin>>s1;
		
		cin.ignore();
		
		string s2;
		cin>>s2;
		cout<<findString(s1,s2)<<endl;
		
	}
	return 0;
	
}

