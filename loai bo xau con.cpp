//#include <bits/stdc++.h>
//using namespace std;
//void delete_str(string &str, string &deletee ) {
//    size_t pos;
//    size_t len = deletee.length();
//    do {
//        pos = str.find( deletee );
//        if( pos == string::npos )
//            break;
//        str.erase( pos, len );
//    }
//    while( true );
//}
//int main(){
//	string s1;
//	getline(cin,s1);
//	cin.ignore();
//	string s2;
//	getline(cin,s2);
//	
//	delete_str(s1,s2);
////	int index = s1.find(s2)-1;
////	s1.replace(index,s2.size()+1,"");
//	cout<<s1;
//	return 0;
//}
#include <bits/stdc++.h>
using namespace std;
void delete_str(string &str, const string &deletee ) {
    int pos;
    size_t len = deletee.length();
    do {
        pos = str.find( deletee );
        if( pos == string::npos )
            break;
        str.erase( pos, len );
    }
    while( true );
}
int main(){
	string s1;
	getline(cin,s1);
	string s2;
	getline(cin,s2);
	
	delete_str(s1,s2);
	cout<<s1;
	return 0;
}
