
#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(long int a)
{
    if(a==1) 
    return false;
    if (a==2) return true;
    if(a%2 == 0)return false;
    for(long int i = 3; i<= sqrt(a);i+=2) // because you have to consider only odd no as divisors!!!
    {
        if(a%i == 0)return false;
    }

    return true;
}
void prime1(long int a, long int b)
{
    for(long int i=a;i<=b;i++)
    {
        if(isPrime(i))cout<<i<<endl;
    }
}
int main()
{

    long int n;
    cin>>n;
    while(n--)
    {
    long int a,b;
    cin>>a>>b;
    prime1(a,b);
    cout<<endl;
    }
    return 0;

}