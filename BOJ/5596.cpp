#include <iostream>
using namespace std;
int A,S[2],x,y;
int main()
{
    for(y=0; y<2; y++)
        for(x=0; x<4; x++)
        {
            cin>>A;
            S[y]+=A;
        }
    cout<<(S[0]>S[1]?S[0]:S[1]);
}