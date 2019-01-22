#include <iostream>
#include <string>
using namespace std;
string a;
int A,B;
int main()
{
    cin>>a;
    for(int x=0; x<a.length()-2; x++)
    {
        if(a[x] == 'J' && a[x+1] == 'O' && a[x+2] == 'I') A++;
        if(a[x] == 'I' && a[x+1] == 'O' && a[x+2] == 'I') B++;
    }
    cout<<A<<endl<<B;
}