#include <iostream>
#include <algorithm>
using namespace std;
int N,M,ar[11],check[11];
void Print()
{
	for(int x=1; x<=M; x++) printf("%d ",ar[x]);
	printf("\n");
}
int f(int m)
{
	if(m<M)
	{
		for(int x=1; x<=N; x++)
		{
			if(check[x]!=1)
			{
				check[x]=1;
				ar[m]=x;
				f(m+1);
				check[x]=0;
			}
		}
	}
	else if(m==M)
	{
		for(int x=1; x<=N; x++)
		{
			if(check[x]!=1)
			{
				check[x]=1;		
				ar[m]=x;
				Print();
				check[x]=0;
			}
		}
	}
	else return 0;
}
int main()
{
	cin>>N>>M;
	f(1);
}
