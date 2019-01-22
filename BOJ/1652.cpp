#include <iostream>
using namespace std;
int N,S,S2;
char ar[110][110];
int main()
{
	cin>>N;
	for(int y=0; y<N; y++)
	{
		for(int x=0; x<N; x++)
		{
			cin>>ar[y][x];
		}
	}
	
	for(int y=0; y<N; y++)
	{
		for(int x=0; x<N; x++)
		{
			int Cnt=0;
			if(ar[y][x]=='.')
			{
				while(ar[y][x]=='.'&&x<N)
				{
					Cnt++;
					x++;
				}
				if(Cnt>=2) S++;
			}
		}
	}
	
	for(int x=0; x<N; x++)
	{
		for(int y=0; y<N; y++)
		{
			int Cnt=0;
			if(ar[y][x]=='.')
			{
				while(ar[y][x]=='.'&&y<N)
				{
					Cnt++;
					y++;
				}
				if(Cnt>=2) S2++;
			}
		}
	}
	cout<<S<<" "<<S2;
}
