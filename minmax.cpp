	//#include <bits/stdc++.h>
	//using namespace std;
	//long long check(long long s){
	//	long long sum = 0;
	//	while(s>0){
	//		sum = sum + s%10;
	//		s/=10;
	//	}
	//	return sum;
	//}
	//int main(){
	//	long long m,s;
	//	cin>>m>>s;
	//	bool khongco = true;
	//	for(long long i = pow(10,m-1);i<=pow(10,m)-1;i++){
	//		if(check(i)==s){
	//			cout<<i<<" ";
	//			khongco = false;
	//			break;
	//		}
	//	}
	//	if(!khongco){
	//		for(long long i = pow(10,m)-1;i>=pow(10,m-1);i--){
	//			if(check(i)==s){
	//				cout<<i;
	//				break;
	//			}
	//		}
	//	}
	//	if(khongco) cout<<"-1 -1";
	//	return 0;
	//}
	//#include <bits/stdc++.h>
	//using namespace std;
	//
	//int main(){
	//	long long m,s;
	//	cin>>m>>s;
	//	if(m==1&&s==0){
	//		cout<<0<<" "<<0<<endl;
	//	}
	//	else if(s==0||s>9*m){
	//		cout<<-1<<" "<<-1<<endl;
	//	}
	//	else{
	//		int tam = s;
	//		int a[m]={0};
	//		int A[m]={0};
	//		for(int i = m-1;i>=0;i--){
	//			for(int j =9;j>=0;j--){
	//				if(tam-j>=0){
	//					a[i]=j;
	//					tam-=j;
	//					break;
	//				}
	//			}
	//			if(a[i]==0) break;
	//		}
	//		if(a[0]==0){
	//			A[0]=1;
	//			for(int j = 1;j<m;j++){
	//				if(a[j]!=0){
	//					a[j]-=1;
	//				}
	//			}
	//		}
	//		for(int i=0;i<m;i++){
	//			cout<<a[i];
	//		}
	//		cout<<" ";
	//		//tim so lon nhat
	//		tam = s;
	////		for(int i =1;i<=m;i++){
	////			A[i]=0;
	////			
	////		}
	//		for(int i =0;i<m;i++){
	//			for(int j = 9;j>=0;j--){
	//				if(tam-j>=0){
	//					A[i]=j;
	//					tam-=j;
	//					break;
	//				}
	//			}
	//			if(A[i]==0) break;
	//			
	//		}
	//		for(int i = 0;i<m;i++){
	//			cout<<a[i];
	//		}
	//	}
	//}
	
	#include <bits/stdc++.h>
	using namespace std;
	
	int main(){
		int m,s;
		cin>>m>>s;
		if(m==1&&s==0){
			cout<<0<<" "<<0<<endl;
		}
		else if(s==0||s>9*m){
			cout<<-1<<" "<<-1<<endl;
		}
		else{
	//		unsigned long long tam = s-1;
	//		unsigned long long setMin = pow(10,m-1);
	//		
	//		for(unsigned long long i = 0;i<m;i++){
	//			cout<<setMin<<endl;
	//			if(tam == 0) break;
	//			if(tam >= 9){
	//				setMin = setMin + 9*pow(10,i);
	//				tam = tam - 9;
	//			}
	//			else {
	//				setMin = setMin + tam*pow(10,i);
	//				tam = 0;
	//			}
	//		}
	//		unsigned long long int setMax = 0;
	//		tam = s;
	//		for(unsigned long long i = m-1;i>=0;i--){
	//			if(tam==0) break;
	//			if(tam>=9){
	//				setMax = setMax + 9*pow(10,i);
	//				tam = tam - 9;
	//			}
	//			else{
	//				setMax = setMax + tam*pow(10,i);
	//				tam=0;
	//			}
	//		}
	//		cout<<setMin<<" "<<setMax;
			int tam = s-1;
			int a[m] = {0};
			a[0] = 1;
			int b[m] ={0};
			
			for(int i = m-1;i>=0;i--){
				if(tam==0) break;
				if(tam>9){
					a[i] += 9;
					tam-=9;
				}
				else {
					a[i]+=tam;
					tam=0;
				}
			}
			tam = s;
			for(int i = 0;i<m;i++){
				if(tam==0) break;
				if(tam>9){
					b[i] += 9;
					tam-=9;
				}
				else {
					b[i]+=tam;
					tam=0;
				}
			}
			
			for(int i = 0;i<m;i++){
				cout<<a[i];
			}
			cout<<" ";
			for(int i = 0;i<m;i++){
				cout<<b[i];
			}
		}
		return 0;
	}
