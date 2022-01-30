#include<iostream>
using namespace std;
int binarysearch(int n, int key, int arr[]){
    int s=0,e=0,mid;
    while(s<=e){
        mid=(s+e)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binarysearch(n,key,arr);
    return 0;
}