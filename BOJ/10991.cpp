#include <iostream>
using namespace std;
int N;
int main()
{
    cin>>N;

    
    for(int y=0; y<N; y++)
    {
        for(int x=1; x<N-y; x++) cout<<" ";
        cout<<"*";
        for(int x=0; x<2*(y-1)+1; x++)
        {
            if(x%2==0) cout<<" ";
            else cout<<"*";
        }
        if(y!=0) cout<<"*";
        cout<<endl;
    }
}