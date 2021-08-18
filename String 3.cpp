//#include<bits/stdc++.h>
//using namespace std;
//
//long long chuyen_he(string n){
//	long long len = n.length();
//	long long res = 0;
//	for(long long i=0;i<len;i++){
//		if(n[i]=='1'){
//			res =res + (long long)(n[i]-'0')*pow(2,len-i-1);
//		}
//	}
//	return res;
//}
//bool chia5(long long n){
//	if(n%10==0||n%10==5) return true;
//	return false;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		string n;
//		cin>>n;
//		long long s = chuyen_he(n);
//		
//		if(chia5(s)) cout<<"Yes"<<endl;
//		else cout<<"No"<<endl;
//
////		char x[205];
////    	x[0]=x[1]='0';
////    	scanf("%s",x+2);
////    	long long n=strlen(x+2);
////    	vector<int> v;
////    	n=n%3;
////    	char *p=x+2;
////    	if(n==1)p=p-2;
////    	if(n==2)p=p-1;
////    	for(;*p;p=p+3){
////        	int a =(p[0]-'0')*4+(p[1]-'0')*2+p[2]-'0';
////    		v.push_back(a);
////		}
////    	if(chia5(v.back())) cout<<"Yes"<<endl;
////		else cout<<"No"<<endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h> 
//
//using namespace std; 
//int equivalentBase4(string bin) 
//{ 
//	if (bin.compare("00") == 0) 
//		return 0; 
//	if (bin.compare("01") == 0) 
//		return 1; 
//	if (bin.compare("10") == 0) 
//		return 2; 
//	return 3; 
//} 
//
//string isDivisibleBy5(string bin) 
//{ 
//	int l = bin.size(); 
//	
//	if (l % 2 != 0) 
//		bin = '0' + bin; 
//	 
//	int odd_sum, even_sum = 0; 
//	
//
//	int isOddDigit = 1; 
//	for (int i = 0; i<bin.size(); i+= 2) 
//	{
//
//		if (isOddDigit) 
//			odd_sum += equivalentBase4(bin.substr(i, 2)); 
//		else
//			even_sum += equivalentBase4(bin.substr(i, 2)); 
//		
//		isOddDigit ^= 1; 
//	}
//	
//	if (abs(odd_sum - even_sum) % 5 == 0) 
//		return "Yes"; 
//	 
//	return "No"; 
//			
//} 
//
//int main() {
//	int t;
//	cin>>t;
//	while(t--){
//		string bin;
//		cin>>bin;
//		cout << isDivisibleBy5(bin)<<endl; 
//	} 
//	return 0; 
//}
#include<bits/stdc++.h>
using namespace std;
int chuyenhe4(string s){
	if(s == "00") return 0;
	if(s == "01") return 1;
	if(s == "10") return 2;
	return 3;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l = s.length();
		if(l%2!=0){
			s = '0'+s;
		}
		int odd_sum=0, even_sum = 0;
		bool check = true;
		for(int i = 0;i<s.size();i+=2){
			if(check){
				
				odd_sum = odd_sum + chuyenhe4(s.substr(i,2));
				check=false;
			}
			else{
				even_sum= even_sum + chuyenhe4(s.substr(i,2));
				check=true;
			}
			
		}
		if(abs(odd_sum-even_sum)%5==0){
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
		
	}
	return 0;
}

//#include<bits/stdc++.h>
//
//using namespace std;
//long long nhiPhanSangHe4(string a){
//    long long kq;
//    if(a == "00") kq = 0;
//    else if(a == "01") kq = 1;
//    else if(a == "10") kq = 2;
//    else kq = 3;
//    return kq;
//}
//void cacSoChiaHet5(string a){
//    if(a.length()%2 != 0) a = '0' + a;
//    long long tongChan = 0, tongLe = 0;
//    bool doiHang = 1;
//    for(long long i = 0; i < a.length(); i+=2){
//        if(doiHang){
//            tongChan += nhiPhanSangHe4(a.substr(i,2));
//            doiHang = 0;
//        } else{
//            tongLe += nhiPhanSangHe4(a.substr(i,2));
//            doiHang = 1;
//        }
//    }
//    long long check = abs(tongChan - tongLe);
//    if(check%5==0) cout<<"Yes"<<endl;
//    else cout<<"No"<<endl;
//}

//int main(){
//    int a; cin>>a;
//    while(a--){
//        string n; cin>>n;
//        cacSoChiaHet5(n);
//    }
//    return 0;
//}




