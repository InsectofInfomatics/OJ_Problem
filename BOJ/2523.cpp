#include <iostream>
using namespace std;
int N;
int main()
{
    cin>>N;
    for(int x=1; x<=N; x++)
    {
        for(int y=0; y<x; y++) cout<<"*";
        cout<<endl;
    }
    
    for(int x=N-1; x>=1; x--)
    {
        for(int y=0; y<x; y++) cout<<"*";
        cout<<endl;
    }
}