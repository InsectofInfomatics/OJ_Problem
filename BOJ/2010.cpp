#include <iostream>
using namespace std;
int N;
int ar[550000],S;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++) cin>>ar[x];
    for(int x=0; x<N; x++) S+=ar[x];

    cout<<S-N+1;
}