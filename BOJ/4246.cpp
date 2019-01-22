#include <iostream>
#include <string>
using namespace std;

int N,K;
string a;
char ar[220][220];
int main()
{
    while(1)
    {
        cin>>N;
        if(N==0) break;

        cin>>a;     
        int Cnt=0;
        for(int y=0; y<a.length()/N; y++)
        {
            if(y%2==0)
            {
                for(int x=0; x<N; x++)
                {
                    ar[y][x]=a[Cnt++];
                }
            }
            else
            {
                for(int x=N-1; x>-1; x--)
                {
                    ar[y][x]=a[Cnt++];
                }
            }
        }

        for(int x=0; x<N; x++)
        {
            for(int y=0; y<a.length()/N; y++) cout<<ar[y][x];
        }


        cout<<endl;
    }
}