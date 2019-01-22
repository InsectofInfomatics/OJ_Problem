#include <iostream>
#include <string>
using namespace std;
string a;
int Cnt=0;
int main()
{
    cin>>a;
    for(int x=0; x<a.length(); x++)
    {
        if(x==0) Cnt+=10;
        else if(a[x-1]==a[x]) Cnt+=5;
        else if(a[x-1]!=a[x]) Cnt+=10;
    }
    cout<<Cnt;
}