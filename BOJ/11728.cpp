#include <iostream>
using namespace std;
int A,B,X,Y;
int a[1100000];
int b[1100000];
int main()
{
	cin>>A>>B;
	for(int x=0; x<A; x++) cin>>a[x];
	for(int y=0; y<B; y++) cin>>b[y];
	while(X<A||Y<B)
	{
		if(X<A&&Y<B)
		{
			if(a[X]>b[Y])
			{
				cout<<b[Y]<<" ";
				Y++;
			}
			else 
			{
				cout<<a[X]<<" ";
				X++;
			}
		}
		else if(X<A)
		{
			cout<<a[X]<<" ";
			X++;
		}
		else if(Y<B)
		{
			cout<<b[Y]<<" ";
			Y++;
		}
	}
	
}
