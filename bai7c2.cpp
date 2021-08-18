#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        vector<long long> arr2;
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
        }
        long long max = arr[n -1];
        arr2.push_back(max);
        for(long long i = n - 2; i >= 0; i--){
            if(arr[i] > max){
                max = arr[i];
                arr2.push_back(max);
            }
        }
        for(long long i = arr2.size() - 1; i >= 0; i--){
            cout<<arr2[i]<<" ";
 
        }
        cout<<endl;
    }
    return 0;
}
