#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rn=0,s;
    while (n!=0)
    {
        /* code */
        s=n%10;
        rn=rn*10+s;
        n=n/10;
    }
    cout<<"reversed number is "<<rn<<endl;
    return 0;
}