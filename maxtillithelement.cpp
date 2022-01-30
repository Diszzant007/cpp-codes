#include<iostream>
// #include<cmath>
using namespace std;
int max(int arr[], int n){
    int mx=-99999;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    max(arr,n);
    return 0;
}