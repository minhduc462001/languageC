#include<bits/stdc++.h>
using namespace std;
//class PhanSo{
//	public:
//		int tu;
//		int mau;
//		PhanSo(){
//			
//		}
//		PhanSo(int tu, int mau){
//			this->tu = tu;
//			this->mau = mau;
//		}
//		void show(){
//			cout<<this->tu<<"/"<<this->mau<<endl;
//		}
//		PhanSo rutGon(){
//		    PhanSo kq;
//			int k = __gcd(tu,mau);
//			kq.tu = tu/k;
//			kq.mau = mau/k;
//			return kq;
//		}
//		PhanSo nhan(PhanSo ps2){
//			PhanSo kq;
//			kq.tu = this->tu * ps2.tu;
//			kq.mau = this->mau * ps2.mau;
//			return kq;
//		}
//};
//int main(){
//	PhanSo ps1(5,10);
//	PhanSo ps2(2,3);
//	ps1.nhan(ps2).rutGon().show();
//	
//	return 0;
//}
class Student{
	public:
		string id;
		string name;
		string lop;
		double THCS2;
		double C;
	public:
		void input(){
			cout<<"Nhap maSV : ";cin>>this->id;
			cin.ignore();
			cout<<"nhap ten : ";getline(cin,this->name);
			cout<<"nhap lop : ";cin>>this->lop;
			cout<<"nhap diem tb thcs2 : ";cin>>this->THCS2;
			cout<<"nhap diem tb c++ : ";cin>>this->C;
		}
		void info(){
			cout<<"maSV : "<<this->id<<" ten : "
			<<this->name<<" lop : "
			<<this->lop<<" diem tb thcs2 : "
			<<this->THCS2<<" diem tb c++: "<<this->C<<endl;
		}
		
};
bool cmp(Student sv1, Student sv2){
	return sv1.name<sv2.name;
}
int main(){
	int n;
	cout<<"nhap so sv : ";
	cin>>n;
	
	Student sv[n];
	for(int i = 0;i<n;i++){
		sv[i].input();
	}
	cout<<"------------"<<endl;
	for(int i = 0;i<n;i++){
		if(sv[i].C>=7){
			sv[i].info();
		}
	}
	cout<<"------------"<<endl;
	sort(sv,sv+n,cmp);
	for(int i = 0;i<n;i++){
		sv[i].info();
	}
	cout<<"------------"<<endl;
	for(int i = 0;i<n;i++){
		
	}
}

