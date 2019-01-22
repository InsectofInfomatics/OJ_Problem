#include <iostream>
using namespace std;
int Max=0,S=0;
int a,b;
int main()
{
    for(int x=0; x<10; x++)
    {
        cin>>a>>b;
        S=S-a+b;
        if(S>Max) Max=S;
    }
    cout<<Max;
}