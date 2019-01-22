#include <iostream>
using namespace std;
bool ar[2200000];
int N,A;
int main()
{
	cin>>N;
	for(int x=0; x<N; x++)
	{
		cin>>A;
		ar[A+1000001] = true;
	}
	for(int x=2100000; x>=0; x--)
	{
		if(ar[x]) cout<<x-1000001<<endl;	
	}
}
