#include <iostream>
using namespace std;
int N;
int ar[220][3];
int check[220];
int main()
{
    cin>>N;
    for(int y=0; y<N; y++)
    {
        for(int x=0; x<3; x++)
        {
            cin>>ar[y][x];
        }
    }

    for(int x=0; x<3; x++)
        for(int y=0; y<N; y++)
        {
            bool A = true;
            for(int z=0; z<N; z++)
            {
                if(y!=z&&ar[y][x]==ar[z][x]) A=false;
            }
            if(A) check[y]+=ar[y][x];
        }
    for(int x=0; x<N; x++) cout<<check[x]<<endl;  
}