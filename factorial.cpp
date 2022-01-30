#include<iostream>
using namespace std;
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main()
{
    int n,n2;
    cin>>n;
    cin>>n2;
    cout<<factorial(n)<<endl;
    cout<<factorial(n2);
    return 0;
}