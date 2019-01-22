#include <iostream>
using namespace std;
char ar[110][110];
int check[110][110];
int N,Cnt,Cnt2;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

void DFS(int Y,int X)
{
	check[Y][X]=1;
	for(int d=0; d<4; d++)
	{
		if(-1<Y+dy[d]&&Y+dy[d]<N&&-1<X+dx[d]&&X+dx[d]<N)
		{
			if(check[Y+dy[d]][X+dx[d]]!=1&&ar[Y+dy[d]][X+dx[d]]==ar[Y][X]) DFS(Y+dy[d],X+dx[d]);
		}	
	}
}
int main()
{
	cin>>N;
	for(int y=0; y<N; y++)
		for(int x=0; x<N; x++) cin>>ar[y][x];
	
	for(int y=0; y<N; y++)
	{
		for(int x=0; x<N; x++)
		{
			if(check[y][x]!=1)
			{
				Cnt++;
				DFS(y,x);
			}
		}
	}
	
	for(int y=0; y<N; y++)
	{
		for(int x=0; x<N; x++)
		{
			check[y][x]=0;
			if(ar[y][x]=='R') ar[y][x]='G';
		}
	}
	
	for(int y=0; y<N; y++)
	{
		for(int x=0; x<N; x++)
		{
			if(check[y][x]!=1)
			{
				Cnt2++;
				DFS(y,x);
			}
		}
	}
	
	cout<<Cnt<<" "<<Cnt2;
}
