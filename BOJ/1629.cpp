#include <iostream>
using namespace std;
long long int A,B,C;
long long int F(long long int X)
{
	if(X==0) return 1;
	else if(X==1) return A%C;
	else if(X%2==0)
	{
		long long int f=F(X/2);
		return (f*f)%C;
	}
	else
	{
		long long int f=F(X/2);
		return (((f*f)%C)*A)%C;
	}
}
int main()
{
	cin>>A>>B>>C;
	cout<<F(B)%C;
}
