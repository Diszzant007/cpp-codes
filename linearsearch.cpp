#include<iostream>
using namespace std;
int linearsearch(int n, int key, int arr[]){
    for(int j=0;j<n;j++){
        if(arr[j]==key){
            return j;
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
    cout<<key<<" is present at "<<linearsearch(n,key,arr)<<endl;
    return 0;
}