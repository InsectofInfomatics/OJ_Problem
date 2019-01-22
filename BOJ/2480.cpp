#include <iostream>
#include <algorithm>
using namespace std;
int A,B,C;
int main()
{
	cin>>A>>B>>C;
	if(A==B&&B==C)
	{
		cout<<10000+A*1000;
	}
	else if(A==B)
	{
		cout<<1000+A*100;
	}
	else if(C==B)
	{
		cout<<1000+B*100;
	}
	else if(A==C)
	{
		cout<<1000+A*100;
	}
	else 
	{
		cout<<100*max(A,max(B,C));
	}
}
