#include <iostream>
using namespace std;
int N;
int f(int x)
{
	if(x==0);
	else 
	{
		f(x/9);
		cout<<x%9;
	}
}
int main()
{
	cin>>N;
	if(N==0) cout<<0;
	else f(N);
}
