#include <iostream>
#include <algorithm>
using namespace std;
long long int N,ar[1100000],A;
int main()
{
	cin>>N;
	for(int x=0; x<N; x++)
	{
		cin>>ar[x];
	}
	sort(ar,ar+N);
	A=1;
	for(int x=0; x<N; x++)
	{
		if(ar[x]!=A)
		{
			cout<<A;
			return 0;
		}
		else A++;
	}
	cout<<A;
}
