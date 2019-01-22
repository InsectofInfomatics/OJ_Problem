#include <iostream>
using namespace std;
int N,M,A,B;
int ar[11000];
int f(int x)
{
	if(ar[ar[x]]!=ar[x])
	{
		return f(ar[x]);
	}
	else return ar[x];
}
int main()
{
	cin>>N>>M;
	for(int x=1; x<=N; x++) ar[x]=x;
	
	for(int x=0; x<M; x++)
	{
		cin>>A>>B;
		if(ar[A]!=ar[B])
		{
			if(A<B) ar[B]=f(A);
			else ar[A]=f(B);
		}		
	}
	for(int x=1; x<=N; x++)
	{
		ar[x]=f(ar[x]);
	}
	for(int x=1; x<=N; x++) cout<<ar[x]<<" ";
}
