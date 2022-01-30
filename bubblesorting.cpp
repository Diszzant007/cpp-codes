#include<iostream>
using namespace std;
int bubblesorting(int n, int arr[]){
    int counter=1;
    int t;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    bubblesorting(n,arr);
    return 0;
}