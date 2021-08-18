#include<bits/stdc++.h>
using namespace std;
struct bs{
	int time;
	int checkin;
};
int cmp(bs a, bs b){
	return a.time<b.time;
}
int main(){
	int n;
	cin>>n;
	bs a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i].time;
		cin>>a[i].checkin;
	}
	sort(a,a+n,cmp);
	int sum_time = a[0].time+a[0].checkin;
	for(int i = 1;i<n;i++){
		if(a[i].time<sum_time){
			sum_time+=a[i].checkin;
		}
		else {
			sum_time = a[i].time+a[i].checkin;
		}
	}
	cout<<sum_time;
	return 0;
}

