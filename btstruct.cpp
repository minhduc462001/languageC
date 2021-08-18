#include<bits/stdc++.h>
using namespace std;
struct Student{
	int id;
	string name;
	int lop;
	double point_THCS2;
	double point_CPlusPlus;
	
};
bool cmp(Student a, Student b){
	return (a.point_CPlusPlus+a.point_THCS2)/2>(b.point_CPlusPlus+b.point_THCS2)/2;
}
bool cmp1(Student a, Student b){
	return a.name<b.name;
}
int main(){
	//freopen("sv.txt", "r",stdin);
	int n;
	cin>>n;
	Student students[n];
	for(int i = 0;i<n;i++){
		cin>>students[i].id;
		cin.ignore();
		getline(cin,students[i].name);
		cin>>students[i].lop>>students[i].point_THCS2>>students[i].point_CPlusPlus;
	}
	cout<<"C++ >= 7.0"<<endl;
	for(int i = 0;i<n;i++){
		if(students[i].point_CPlusPlus>=7){
			cout<<students[i].id<<" "<<students[i].name<<" "
				<<students[i].lop<<" "<<students[i].point_THCS2
				<<" "<<students[i].point_CPlusPlus<<endl;
		}
	}
	cout<<"sap xep theo ten"<<endl;
	sort(students, students+n, cmp1);
	for(int i = 0;i<n;i++){
		cout<<students[i].id<<" "<<students[i].name<<" "
			<<students[i].lop<<" "<<students[i].point_THCS2
			<<" "<<students[i].point_CPlusPlus<<endl;
	}
	cout<<"sap xep theo diem tb"<<endl;
	sort(students, students+n, cmp);
	for(int i = 0;i<n;i++){
		cout<<students[i].id<<" "<<students[i].name<<" "
			<<students[i].lop<<" "<<students[i].point_THCS2
			<<" "<<students[i].point_CPlusPlus<<endl;
	}
	return 0;
}

