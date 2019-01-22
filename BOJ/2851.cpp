#include <iostream>
using namespace std;
int a,Max=0,S;
int f(int x)
{
    return (100-x>0?100-x:x-100);
}
int main()
{
    for(int x=0; x<10; x++)
    {
        cin>>a;
        S+=a;
        if(f(S)<=f(Max)) Max=S;
    }
    cout<<Max;
}