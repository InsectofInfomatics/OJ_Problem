#include <iostream>
using namespace std;
int A=100,B=100,T,a,b;
int main()
{
	cin>>T;
	for(int x=0; x<T; x++)
	{
		cin>>a>>b;
		if(a>b) B-=a;
		else if(b>a) A-=b;
	}
	cout<<A<<endl<<B;
}
