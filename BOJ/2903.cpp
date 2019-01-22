#include <iostream>
using namespace std;
long long int N,a=2;
int main()
{
	cin>>N;
	for(int x=0; x<N; x++)
	{
		a=2*a-1;
	}
	cout<<a*a;
}
