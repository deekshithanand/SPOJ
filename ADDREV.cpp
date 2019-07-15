#include<iostream>
#include<stack>
using namespace std;
long int reverse(long int a)
{
    if( a== 0) return 0;
    stack<long int> t;
    while (a)
    {
        t.push(a%10);
        a/=10;

    }
    long int base =1;
    long int rnum =0;
    //pop all 0s
    int zeros=t.top();
    while(zeros == 0)
    {
        t.pop();
        zeros=t.top();
    }
    while (!t.empty())
    {
        int tmp = t.top();
        t.pop();
    
        {
            rnum+=(tmp*base);
            base*=10;
        }
    }
    
    return rnum;
}

long int solve(long int a,long int b)
{
    long int rsum;
    rsum= reverse(a) + reverse(b);
    return reverse(rsum);
}
int main()
{
   int n;
    cin>>n;
    while(n--)
    {
        long int a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
    
}