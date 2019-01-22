#include <iostream>
using namespace std;
int S,Max=0,N,A;
int main()
{
	cin>>N;
	for(int x=0; x<N; x++)
	{
		cin>>A;
		S+=A;
		if(A>Max) Max=A;
	}
	cout<<S-Max;
}
