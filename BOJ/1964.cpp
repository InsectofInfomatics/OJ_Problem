#include <iostream>
#define M 45678
using namespace std;
long long int N,S;
int main()
{
	cin>>N;
	S+=((4*N)%M);
	if(N%2==0)
	{
		S+=((((N/2)*(N-1))%M)*3)%M;
	}
	else
	{
		S+=(((((N-1)/2)*N)%M)*3)%M;
	}
	S++;
	S%=M;
	cout<<S;
}
