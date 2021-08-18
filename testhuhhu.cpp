#include <iostream>
using namespace std;
  

int minSwap(int *arr1, int n, int k) 
{ 
    int ctr = 0; 
    for (int i = 0; i < n; ++i) 
        if (arr1[i] <= k) 
            ++ctr; 
    int gelem = 0; 
    for (int i = 0; i < ctr; ++i) 
        if (arr1[i] > k) 
            ++gelem; 
    int noswp = gelem; 
    for (int i = 0, j = ctr; j < n; ++i, ++j) 
	{ 
        if (arr1[i] > k)
        {
            --gelem; 
        }
        if (arr1[j] > k)
        {
            ++gelem; 
        }
    }
        
        if(noswp<gelem)
        {
            noswp=noswp;
        }            
    return noswp; 
} 
int main() 
{ 
    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin >>n >>k ;
        int arr1[n];
	    for(int i = 0; i < n; i++)
		{
			cin>> arr1[i];
		}
        cout << minSwap(arr1, n, k)<<endl; 
   
    }
    return 0;
}
