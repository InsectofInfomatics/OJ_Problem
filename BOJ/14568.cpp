#include <iostream>
using namespace std;
int N,Cnt;
int main()
{
	cin>>N;
	for(int x=1; x<=N; x++)
	{
		for(int y=1; y<=N; y++)
		{
			for(int z=1; z<=N; z++)
			{
				if(x+y+z==N&&x%2==0&&z-y>=2) Cnt++;
			}
		}
	}
	cout<<Cnt;
}
