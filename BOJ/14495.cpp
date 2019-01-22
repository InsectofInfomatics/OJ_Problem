#include <iostream>
using namespace std;
long long int N,ar[220];
int main()
{
	cin>>N;
	ar[1]=ar[2]=ar[3]=1;
	for(int x=4; x<=N; x++) ar[x]=ar[x-1]+ar[x-3];
	cout<<ar[N];
}
