#include<iostream>
#include<cmath>
using namespace std;
bool primenumber(int n){
    for(int j=2;j<=sqrt(n);j++){
        if(n%j==0){
            return false;
        }
    }
    return true;    
} 
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(primenumber(i)){
            cout<<i<<" prime number"<<endl;
        }
    }
    return 0;
}