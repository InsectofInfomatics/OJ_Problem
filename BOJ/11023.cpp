#include <iostream>
#include <stdio.h>
using namespace std;
int N;
int S;
int main()
{
    while(scanf("%d",&N)!=EOF)
    {
        S+=N;
    }
    cout<<S;
}