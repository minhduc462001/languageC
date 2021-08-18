#include <bits/stdc++.h>
using namespace std;


void email(char *name){
	int n = strlen(name),ior=0;
	char *p =  name + n, *q, *i, result[100]={0};
	while(q>name&&*q!=0x20) q--;
	for(i=q+1;i<p;i++)
	result[ior++]=tolower(*i);
	for(i=name;i<q;i++)
	if ((i==name&&isalpha(*name))||(i>name&&i[-1]==0x20&&isalpha(*i))) 
	result[ior++]=tolower(*i);
	i=p+1;
	while(*i=='0') i++;
	for(;i<name+n;i++)
	result[ior++]=*i;
	strcat(result,"@ptit.edu.vn");
	cout<<result;
}
int main()
{
	char name[100];
	if(fgets(name, 100,stdin)!=NULL);
	name[strlen(name)-1] = NULL;
	email(name);
	return 0;
}
