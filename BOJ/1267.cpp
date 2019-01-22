#include <iostream>
using namespace std;
int N;
long long int A,S1,S2;
int main()
{
	cin>>N;
	for(int x=0; x<N; x++)
	{
		cin>>A;
		S1+=A/30;
		S1++;
		
		S2+=A/60;
		S2++;
	}
	S1*=10;
	S2*=15;
	
	if(S1<S2)
	{
		cout<<"Y "<<S1;
	}
	else if(S1>S2)
	{
		cout<<"M "<<S2;
	}
	else
	{
		cout<<"Y M "<<S1;
	}
	
}
