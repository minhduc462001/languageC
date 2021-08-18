//#include<bits/stdc++.h>
//using namespace std;
//int dem_tu(string n){
//	int len = n.length();
//	int dem = 1;
//	for(int i = 0;i<len-1;i++){
//		if(n[i]=='\t'||n[i]=='\n')
//			n[i] == 32;
//		if(n[i]==32){
//			while(n[i+1]==32){
//				n[i+1]='\0';
//				len--;
//			}
//		}
//	}
//	while(n[0]== 32) {
//		n[0] = '\0';
//		len--;
//	}
//	while(n[len-1]==32){
//		n[len-1]='\0';
//		len--;
//	}
//	for(int i = 0;i<len;i++){
//		if(n[i]==32) dem++;
//	}
//	return dem;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		cin.ignore();
//		string n;
//		getline(cin,n);
//		cout<<dem_tu(n)<<endl;
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//    int a; cin>>a; cin.ignore();
//    while(a--){
//        string n; getline(cin, n);
//        int kq = 0;
//        //loai bo cac ki tu '\n', '\t' thay bang ' '
//        for(int i = 0; i < n.length() - 1; i++){
//            if(n[i] == '\t' || n[i] == '\n'){
//                n[i] = ' ';
//            }
//        }
//        cout<<n<<endl;
//        for(int i = 0; i < n.length() - 1; i++){
//            if(n[i] != n[i + 1] && n[i] == ' ') kq++;
//        }
//        cout<<kq + 1<<endl;
//    }
//}
#include<bits/stdc++.h>
using namespace std;
void xoa(char *a, int n){
	int t = strlen(a);
	for (int k = n; k < t - 1; k++)
	a[k] = a[k + 1];
	a[t - 1] = '\0';
}
void xoadaucach(char *a){
	int t = strlen(a);
	while (a[t-1] == 32){
		xoa(a, t-1);
		t--;
	}
	while (a[0] == 32){
	xoa(a, 0);
	t--;
	}
	for (int i = 0; i < t; i++){
		if (a[i] == 32)
			while (a[i + 1] == 32){
				xoa(a, i + 1);
				t--;
			}
	}
}
int dem_tu(char *n){
	int len = strlen(n);
	int dem = 1;
	for(int i = 0; i < len - 1; i++){
        if(n[i] == '\t' || n[i] == '\n'){
            n[i] = ' ';
        }
	}
	for(int i = 0;i<len;i++){
		if(n[i] == ' ') dem++;
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		char n[1000];
		fgets(n,1000,stdin);
		n[strlen(n)-1] = NULL;
		xoadaucach(n);
//		cout<<"Tu goc : "<<n<<endl;
		cout<<dem_tu(n)<<endl;
	}
	return 0;
}
