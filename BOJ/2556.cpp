#include <iostream>
using namespace std;
int N;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        for(int y=0; y<N; y++) cout<<"*";
        cout<<endl;
    }
}