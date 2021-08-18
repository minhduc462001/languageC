#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		int i = 0, j = n-1;
		int k, Max, Min;
		for(i = 0;i<n-1;i++){
			if(a[i]>a[i+1]) break;
		}
		if(i == n-1) {
			cout<<0<<" "<<n-1<<endl;
			continue;
		}
		for(j =  n-1;j>0;j--){
			if(a[j]<a[j-1]){
				break;
			}
		}
		Max = a[i];
		Min = a[i];
		for(k = i + 1; k <= j; k++){
		    if(a[k] > Max) Max = a[k];
		    if(a[k] < Min) Min = a[k];
		}
		for( k = 0; k < i; k++){
		    if(a[k] > Min){
		    	i = k;
		    	break;
		    }    
		}
		for( k = n -1; k >= j+1; k--){
		    if(a[k] < Max){
			    j = k;
			    break;
		    }
		}
		cout<<i+1<<" "<<j+1<<endl;
	}
	return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//
//void printUnsorted(int arr[], int n)
//{
//int s = 0, e = n-1, i, max, min;
//
//// step 1(a) of above algo
//for (s = 0; s < n-1; s++)
//{
//	if (arr[s] > arr[s+1])
//	break;
//}
//if (s == n-1)
//{
//	cout << "The complete array is sorted";
//	return;
//}
//
//// step 1(b) of above algo
//for(e = n - 1; e > 0; e--)
//{
//	if(arr[e] < arr[e-1])
//	break;
//}
//
//// step 2(a) of above algo
//max = arr[s]; min = arr[s];
//for(i = s + 1; i <= e; i++)
//{
//	if(arr[i] > max)
//	max = arr[i];
//	if(arr[i] < min)
//	min = arr[i];
//}
//
//// step 2(b) of above algo
//for( i = 0; i < s; i++)
//{
//	if(arr[i] > min)
//	{
//	s = i;
//	break;
//	}	
//}
//
//// step 2(c) of above algo
//for( i = n -1; i >= e+1; i--)
//{
//	if(arr[i] < max)
//	{
//	e = i;
//	break;
//	}
//}
//	
//// step 3 of above algo
//cout << "The unsorted subarray which"
//	<< " makes the given array" << endl
//	<< "sorted lies between the indees "
//	<< s << " and " << e;
//return;
//}
//
//int main()
//{	
//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i = 0;i<n;i++){
//		cin>>arr[i];
//	}
//	printUnsorted(arr, n);
//	getchar();
//	return 0;
//}

