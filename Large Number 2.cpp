#include<bits/stdc++.h>
using namespace std;
void swapPointer(char** a, char** b)
{
	char* temp = *a;
	*a = *b;
	*b = temp;
}

char* tongString (char* x, char* y){
	size_t lenX = strlen(x);
	size_t lenY = strlen(y);
	
	char* res = new char[lenX + 2];
	memset(res,'0',lenX);
	bool remember = false;
	if(lenX<lenY) swapPointer(&x,&y);		
	
	for(int i = 0;i<lenY;i++){
		int temp = y[lenY -i-1]-'0' + x[lenX-i-1] -'0';
		if(remember){
			temp++;
		}
		remember = temp>9;
		temp = temp%10;
		res[lenX-i] = temp +'0';
	}
	for(int i = 0;i<lenX - lenY;i++){
		int temp = x[lenX - lenY-i-1]-'0';
		if(remember) temp++;
		remember = temp>9;
		temp = temp%10;
		res[lenX - lenY -i]= temp + '0';
	}
	res[lenX+1]='\0';
	if(remember) res[0] = '1';
	else{
		for(int i = 0;i<= lenX;i++){
			res[i]= res[i+1];
		}
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	
	while(t--){
		char x[1000];
		cin>>x;
		cin.ignore();
		char y[100000];
		cin>>y;
		cout<<tongString(x,y)<<endl;
	}
	return 0;
}


