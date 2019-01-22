#include <iostream>
using namespace std;
int T,a,b;
int gcd(int A,int B)
{
    return B>0?gcd(B,A%B):A;
}
int main()
{
    cin>>T;
    for(int x=0; x<T; x++)
    {
        cin>>a>>b;
        cout<<a*b/gcd(a,b)<<" "<<gcd(a,b)<<endl;
    }
}