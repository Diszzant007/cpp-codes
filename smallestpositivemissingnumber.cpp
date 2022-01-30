#include<iostream>
#include<cmath>
using namespace std;
int missingnumber(int n, int arr[]){
    int N=(pow(10,6))+2;
    bool check[N];
    int i;
    for(i=0;i<n;i++){
        check[i]=false;
    }
    int minmissno=99999;
    for(i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]=true;
        }
    }
    for(i=0;i<n;i++){
        if(check[i]==false){
            minmissno=min(minmissno,i);
        }
    }
    cout<<minmissno<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    missingnumber(n,arr);
    return 0;
}