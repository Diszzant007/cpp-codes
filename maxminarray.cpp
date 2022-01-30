#include<iostream>
using namespace std;
int maxmin(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    int min=100000;
    for(int j=0;j<n;j++){
        if(max<arr[j]){
            max=arr[j];
        }
        if(min>arr[j]){
            min=arr[j];
        }
    }
    cout<<"maximum number is "<<max<<" minimum number is"<<" "<<min<<endl;
}
int main()
{
    int n;
    cin>>n;
    maxmin(n);
    return 0;
}