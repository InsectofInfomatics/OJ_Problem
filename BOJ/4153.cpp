#include <iostream>
#include <algorithm>
using namespace std;
int a[5];
int main()
{
    while(1)
    {
        int S=0;
        for(int x=0; x<3; x++) cin>>a[x];
        for(int x=0; x<3; x++) S+=a[x];
        if(S==0) break;

        sort(a,a+3);

        if(a[2]*a[2]==a[0]*a[0]+a[1]*a[1]) cout<<"right\n";
        else cout<<"wrong\n";
    }
}