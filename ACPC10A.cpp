/*
ACPC10A - What’s Next
 */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cin>>a>>b>>c;
    while(1){
        if(a == 0 && b == 0 && c == 0)break;
        else{
            if(b-a == c-b){
                cout<<"AP"<<" "<<c+(b-a)<<endl;
            }else{
                cout<<"GP"<<" "<<(int)(c*(b/a))<<endl;
            }
        }
        cin>>a>>b>>c;
    }
    return 0;
}
