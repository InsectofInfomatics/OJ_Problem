#include <iostream>
using namespace std;
int T,N;
int A,Cnt;
double B,S;
int main()
{
    cin>>T;
    for(int x=0; x<T; x++)
    {
        Cnt=0;
        S=0;
        cin>>N;
        for(int y=0; y<N; y++)
        {
            cin>>A>>B;
            Cnt+=A;
            S+=B*A;
        }
        printf("%d %.1lf\n",Cnt,S/Cnt);
    }
}