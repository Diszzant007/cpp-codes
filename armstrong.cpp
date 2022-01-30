#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s, arm=0, num=n;
    while(n!=0){
        s=n%10;
        arm=arm+pow(s,3);
        n=n/10;
    }
    if(arm==num){
        cout<<num<<" is an armstrong number"<<endl;
    }
    else{
        cout<<num<<" is not armstrong number"<<endl;
    }
    return 0;
}