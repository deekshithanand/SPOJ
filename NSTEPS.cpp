#include<iostream>
using namespace std;
void solve(int a,int b){
    if(a == b || a - b == 2){
        if ( a%2 == 0 && b%2 == 0){
            cout<<a+b;
        }
        else{
            cout<<a+b-1;
        }
    }
    else{
        cout<<"No Number";
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>> n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        solve(a,b);
        cout<<endl;
    }
    return 0;
}
