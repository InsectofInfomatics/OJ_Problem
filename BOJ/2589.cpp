#include <iostream>
using namespace std;
int N,M;
char ar[55][55];
int check[55][55];
int Max=0;
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

void Init()
{
	for(int y=0; y<N; y++)
	{
		for(int x=0; x<M; x++)
		{
			check[y][x]=999999;
		}
	}
}
void Check()
{
	for(int y=0; y<N; y++)
	{
		for(int x=0; x<M; x++)
		{
			if(check[y][x]>Max&&check[y][x]!=999999) Max=check[y][x];		}
	}
}

void DFS(int Y,int X)
{
	for(int d=0; d<4; d++)
	{
		if(0<=X+dx[d]&&X+dx[d]<M&&0<=Y+dy[d]&&Y+dy[d]<N)
		{
			if(ar[Y+dy[d]][X+dx[d]]=='L'&&check[Y+dy[d]][X+dx[d]]>check[Y][X]+1)
			{
				check[Y+dy[d]][X+dx[d]]=check[Y][X]+1;
				DFS(Y+dy[d],X+dx[d]);
			}
		}
	}
}

int main()
{
	cin>>N>>M;
	for(int y=0; y<N; y++)
	{
		for(int x=0; x<M; x++)
		{
			cin>>ar[y][x];
		}
	}
	
	for(int y=0; y<N; y++)
	{
		for(int x=0; x<M; x++)
		{
			Init();
			if(ar[y][x]=='L') 
			{
				check[y][x]=0;
				DFS(y,x);
			}
			Check();
		}
	}
	
	cout<<Max;
	
}
