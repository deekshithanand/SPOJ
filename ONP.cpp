#include<iostream>
using namespace std;
#include<stack>
int prec(char i)
{
    if (i == '^')return 3;
    else if(i == '*' || i == '/') return 2;
    else if(i == '+' || i == '-') return 1;
    else return 0;
}
void solve(string &st)
{
    string op;
    stack<char> stk;
    stk.push('N');
    for(auto i:st)
    {
        if(i >= 'A' && i <= 'Z' || i >= 'a' && i<= 'z' || i >= '0' && i <= '9')op+=i;
        else if(i == '(') stk.push('(');
        else if(i == ')'){
            while(stk.top() != '('){
                op+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else{
            
            
                while(stk.top() != 'N' &&  prec(stk.top()) >= prec(i)  )
                {
                op+=stk.top();
                stk.pop();
                }
                stk.push(i);
            

        }
    }
    while(stk.top() != 'N')
    {
        op+=stk.top();
        stk.pop();

    }
    cout<<op<<endl;
}
int main(int argc, const char** argv) {
    int n;
    cin>>n;
    while(n--)
    {
        string st;
        cin>>st;
        solve(st);
    }
    return 0;
}