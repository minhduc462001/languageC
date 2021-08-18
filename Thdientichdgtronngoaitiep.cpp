#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		double a1,a2,b1,b2,c1,c2;
		cin>>a1>>a2>>b1>>b2>>c1>>c2;
		
		
		
//		
//		
//		if(a1==b1&&b1==c1&&a1==c1){
//			cout<<"INVALID"<<endl;
//			continue;
//		}
//		if(b2==a2&&c2==a2&&c2==b2){
//			cout<<"INVALID"<<endl;
//			continue;
//		}
//		if(a1==b1&&a2==b2){
//			cout<<"INVALID"<<endl;
//			continue;
//		}
//		if(c1==b1&&c2==b2){
//			cout<<"INVALID"<<endl;
//			continue;
//		}
//		if(a1==c1&&a2==c2){
//			cout<<"INVALID"<<endl;
//			continue;
//		}
		double ab, ac, bc;
		ab = sqrt(pow(b1-a1,2)+pow(b2-a2,2));
		ac = sqrt(pow(c1-a1,2)+pow(c2-a2,2));
		bc = sqrt(pow(b1-c1,2)+pow(b2-c2,2));
		
		if(ab<ac+bc&&ac<ab+bc&&bc<ab+ac){
		double S ;
		double res = 0;
		double R = 0;
		double pt = (bc+ac+ab)*(bc+ac-ab)*(ac+ab-bc)*(ab+bc-ac);
		double sqrtpt = sqrt(pt);
		
		S = 0.25*sqrtpt;
		R = (ab*bc*ac)/(4*S);
		res = PI*R*R;
		printf("%0.3f",res);
		}
		else cout<<"INVALID"<<endl;
		
		
		
	
	}
	return 0;
}

