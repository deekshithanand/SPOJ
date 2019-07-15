/*
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!
 */

#include<iostream>
#define li long int
#define mod 1000000007
using namespace std;
li fac(li n, li dp[])
{
    if(dp[n])
    return dp[n];
    else
    {
        dp[n]=(n*fac(n-1,dp))%mod;
        return dp[n];
    }
    
}
int main()
{
    li dp[101]={0};
    dp[0]=dp[1]=1;
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        cout<<fac(n,dp)<<endl;
    }

    return 0;
}