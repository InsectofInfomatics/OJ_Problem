#include <iostream>
#include <string>
using namespace std;
string a,b;
int Max,Min;
int A,B;
int main()
{
    cin>>a>>b;
    for(int x=0; x<a.length(); x++)
    {
        if(a[x]=='5') a[x]='6';
    }
    for(int x=0; x<b.length(); x++)
    {
        if(b[x]=='5') b[x]='6';
    }
    A=B=0;
    for(int x=0; x<a.length(); x++)
    {
        A*=10;
        A+=a[x]-'0';
    }
    for(int x=0; x<b.length(); x++)
    {
        B*=10;
        B+=b[x]-'0';
    }
    Max=A+B;

    for(int x=0; x<a.length(); x++)
    {
        if(a[x]=='6') a[x]='5';
    }
    for(int x=0; x<b.length(); x++)
    {
        if(b[x]=='6') b[x]='5';
    }
    A=B=0;
    for(int x=0; x<a.length(); x++)
    {
        A*=10;
        A+=a[x]-'0';
    }
    for(int x=0; x<b.length(); x++)
    {
        B*=10;
        B+=b[x]-'0';
    }
    Min=A+B;

    cout<<Min<<" "<<Max;
}