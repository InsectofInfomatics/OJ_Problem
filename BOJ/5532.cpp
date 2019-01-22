#include<iostream>
using namespace std;
int L,A,B,C,D;
int main()
{
    cin>>L>>A>>B>>C>>D;
    A=(A%C==0?A/C:A/C+1);
    B=(B%D==0?B/D:B/D+1);
    cout<<L-(A>B?A:B);
}