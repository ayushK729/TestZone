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
int factorial(int n)
{
    int f=1;
    if(n==1 || n==0)
        return 1;
    else return n*(factorial(n-1));
}
int main()
{
    int n;
    cout<<"Input a number of choice:";
    cin>>n;
    cout<<"Is "<<n<<" a prime number --> "<<isPrime(n)<<endl;
    cout<<"Factorial of "<<n<<" --> "<<factorial(n)<<endl;
    cout<<"Hello World!";
    return 0;
}