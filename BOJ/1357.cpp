#include <iostream>
using namespace std;
int A,B,C,a,b,c;
int main()
{
	cin>>A>>B;
	while(A>0)
	{
		a*=10;
		a+=A%10;
		A/=10;
	}
	while(B>0)
	{
		b*=10;
		b+=B%10;
		B/=10;
	}
	C=a+b;
	while(C>0)
	{
		c*=10;
		c+=C%10;
		C/=10;
	}
	cout<<c;
	
}
