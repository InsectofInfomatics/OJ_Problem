#include <iostream>
using namespace std;
int N;
int main()
{
    cin>>N;

    
    for(int y=0; y<N; y++)
    {
        if(y==N-1)
        {
            for(int x=0; x<2*(N-1)+1; x++) cout<<"*";
        }
        else
        {
            for(int x=1; x<N-y; x++) cout<<" ";
            cout<<"*";
            for(int x=0; x<2*(y-1)+1; x++)
            {
                cout<<" ";
            }
            if(y!=0) cout<<"*";
            cout<<endl;
        }
        
    }
}