#include <iostream>
#include <stack>
using namespace std;

stack <int> a;
stack <int> b;
int N;
int ar[110];

int main()
{
    cin>>N;
    for(int x=1; x<=N; x++) cin>>ar[x];

    for(int x=1; x<=N; x++)
    {
        for(int y=0; y<ar[x]; y++)
        {
            b.push(a.top());
            a.pop();
        }
        a.push(x);
        while(!b.empty())
        {
            a.push(b.top());
            b.pop();
        }
    }
    while(!a.empty())
    {
        b.push(a.top());
        a.pop();
    }
    while(!b.empty())
    {
        cout<<b.top()<<" ";
        b.pop();
    }
}