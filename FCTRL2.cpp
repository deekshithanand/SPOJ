#include<iostream>
using namespace std; 
void solve(int num)
{   
    if(num==0 || num==1)
    {
        cout<<1;
        return ;
    }
    int a[200]={0};
    int tmp=num;
    int m=0;
    while(tmp){
        a[m]=tmp%10;
        tmp/=10;
        m++;
    }
    int x=0;
    tmp=0;
    for(int i=2;i<num;i++)
    {
        for(int j=0;j<m;j++)
        {
            x=a[j]*i+tmp;
            a[j]=x%10;
            tmp=x/10;
        }
        while(tmp!=0)
        {
            a[m]=tmp%10;
            m++;
            tmp/=10;
        }
        
    }
    for(int i = m-1; i >= 0; i--)cout<<a[i];

    

}
int main(int argc, const char** argv) {
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        solve(a);
        cout<<endl;
    }
    return 0;
}