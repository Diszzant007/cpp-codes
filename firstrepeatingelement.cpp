#include<iostream>
#include<cmath>
using namespace std;
int minrepidx(int n, int arr[]){
    int N=pow(10,6);
    int idx[N];
    for(int i=0;i<n;i++){
        idx[i]=-1;
    }
    int minidx=99999;
    for(int j=0;j<n;j++){
        if(idx[arr[j]]!=-1){
            minidx=min(minidx,idx[arr[j]]);
        }
        else{
            idx[arr[j]]=j;
        }
    }
    if(minidx==99999){
        return -1;
    }
    else{
        return minidx;
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
    cout<<minrepidx(n,arr)<<endl;
    return 0;
}