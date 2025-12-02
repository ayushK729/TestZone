#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    bool f=true;
    for(int i=2;i<n;i++)
        if(n%i==0)
        {
            f=false;
            break;
        }
    return f;
}
int main()
{
    int n;
    cout<<"Input a number of choice:";
    cin>>n;
    cout<<"Is "<<n<<" a prime number --> "<<isPrime(n)<<endl;
    cout<<"Hello World!";
    return 0;
}