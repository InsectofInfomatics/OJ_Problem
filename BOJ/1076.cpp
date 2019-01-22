#include <iostream>
#include <string>

using namespace std;
string ar[15]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
string a,b,c;
long long int A,B=1;
int main()
{
    cin>>a>>b>>c;
    for(int x=0; x<10; x++)
    {
        if(a==ar[x]) A+=x*10;
        if(b==ar[x]) A+=x;
    }
    for(int x=0; x<10; x++)
    {
        if(c==ar[x])
        {
            for(int y=0; y<x; y++) B*=10;
        }
    }
    cout<<A*B;
}