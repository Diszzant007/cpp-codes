#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=1;
    char arr[n+1];
    cin>>arr;
    for(int i=0;i<=n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not plaindrome"<<endl;
    }
    return 0;
}