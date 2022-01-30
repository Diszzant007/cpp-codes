#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool marker=0;
    // cin>>n;
    for (int i = 2; i < sqrt(n) ; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            cout<<"not-prime"<<endl;
            marker=0;
            break;
        }
        marker=1;
    }
    if (marker==1)
    {
        /* code */
        cout<<"Prime Number"<<endl;
    }
    // else{
        // cout<<"Not a prime number"<<endl;
    // }

    
    
    return 0;
}