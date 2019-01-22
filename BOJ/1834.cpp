#include <iostream>
using namespace std;
long long int N;
int main()
{
	cin>>N;
	if(N%2==0)
	{
		cout<<(N/2)*(N*N-1);
	}
	else 
	{
		cout<<N*((N*N-1)/2);
	}
}

