#include <iostream>
#include <algorithm>
using namespace std;

struct st{
    int a,n;
};

int N,S=0;

st ar[550000];

bool compare(st A,st B)
{
    if(A.a>B.a) return true;
    return false;
}

int f(int a)
{
    return a>0?a:-a;
}
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>ar[x].a;
        ar[x].n=x;
    }
    sort(ar,ar+N,compare);

    for(int x=0; x<N; x++)
    {
       S+=f(x-ar[x].n);
    }
    cout<<S;
}