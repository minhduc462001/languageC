#include<bits/stdc++.h>
using namespace std;
struct ps{
	int tu;
	int mau;
};
int main(){
	int t;
	cin>>t;
	int tt = 1;
	while(t--){
		ps ps1;
		ps ps2;
		ps ps3;
		ps ps4;
		ps ps5;
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int k = __gcd(a,b);
		int h = __gcd(c,d);
		ps1.tu = a/k;
		ps1.mau = b/k;
		ps2.tu = c/h;
		ps2.mau = d/h;
		int msc = __gcd(ps1.mau,ps2.mau);
		ps3.tu = ps1.tu*ps2.mau/msc;
		ps3.mau = ps1.mau*ps2.mau/msc;
		ps4.tu = ps1.mau*ps2.tu/msc;
		ps4.mau = ps1.mau*ps2.mau/msc;
		
		
		
		cout<<"Case #"<<tt<<":"<<endl;
		tt++;
		cout<<ps3.tu<<"/"<<ps3.mau<<" "<<ps4.tu<<"/"<<ps4.mau<<endl;
		cout<<ps3.tu+ps4.tu<<"/"<<ps3.mau<<endl;
		ps5.tu = ps1.tu*ps2.mau;
		ps5.mau = ps1.mau*ps2.tu;
		int m = __gcd(ps5.tu,ps5.mau);
		ps5.tu = ps1.tu*ps2.mau/m;
		ps5.mau = ps1.mau*ps2.tu/m;
		cout<<ps5.tu<<"/"<<ps5.mau<<endl;
	}
	return 0;
}

