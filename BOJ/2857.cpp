#include <iostream>
#include <string>
using namespace std;

string a[10];
int Cnt,A;
int main()
{
    for(int x=0; x<5; x++) cin>>a[x];

    for(int x=0; x<5; x++)
    {
        Cnt=0;
        for(int y=0; y<a[x].length()-2; y++)
        {
            if(a[x][y]=='F'&&a[x][y+1]=='B'&&a[x][y+2]=='I') Cnt=1;
        }
        if(Cnt==1)
        {
            cout<<x+1<<endl;
            A++;
        }
    }
    if(A==0) cout<<"HE GOT AWAY!";
}