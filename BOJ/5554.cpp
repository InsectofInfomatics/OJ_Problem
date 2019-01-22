#include <iostream>
using namespace std;
int A,S;
int main()
{
    for(int x=0; x<4; x++)
    {
        cin>>A;
        S+=A;
    }
    cout<<S/60<<endl<<S%60;
}