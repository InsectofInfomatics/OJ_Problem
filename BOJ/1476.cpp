#include <iostream>
using namespace std;
int a,b,c,N,x=1,y=1,z=1;
int main()
{
	cin>>a>>b>>c;
	while(1)
	{
		N++;
		if(a==x&&b==y&&c==z) break;
		x++; y++; z++;
		
		if(x==16) x=1;
		if(y==29) y=1;
		if(z==20) z=1;
	}
	cout<<N;
}
