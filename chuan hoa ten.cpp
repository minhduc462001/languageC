#include <bits/stdc++.h>
using namespace std;
void xoa(char *a, int n){
	int t = strlen(a);
	for (int k = n; k < t - 1; k++)
	a[k] = a[k + 1];
	a[t - 1] = '\0';
}
char* xoadaucach(char *a){
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
void chuanHoa(char *a){
	xoadaucach(a);

	int n = strlen(a),index;
	
	for(int i=0;i<strlen(a);i++) {
        if (a[i] >= 'A' && a[i]<='Z')
			a[i]+=32;
    }
	if (a[0] != 32) a[0] -= 32;
	
	for (int i = 0; i < n; i++)
		if (a[i] == 32)
			if (a[i + 1] != 32) a[i + 1] -= 32;

	for(int i = n-1;i>0;i--){
		if(a[i]>='a'&&a[i]<='z')
			a[i]-= 32;
		if(a[i-1]==32) {
			index = i-1;
			break;
		}
	}
	
	char *b = a+n, result[100]={0};
	
	strncpy(result,a,index);

	char *q = b-(n-index-1);

	strcat(result,", ");
	strcat(result,q);
	cout<<result<<endl;
}

int main()
{
	char a[100];
	if(fgets(a, 100,stdin) !=NULL);
	a[strlen(a)-1] = NULL;
	chuanHoa(a);
	return 0;
}
