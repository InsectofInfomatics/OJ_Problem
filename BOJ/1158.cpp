#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
int N,M;
queue <int> que;
queue <int> q2;
int main()
{
	cin>>N>>M;
	for(int x=1; x<=N; x++) que.push(x);
	
	for(int x=1; x<=N; x++)
	{
		for(int y=1; y<M; y++)
		{
			que.push(que.front());
			que.pop();
		}
		q2.push(que.front());
		que.pop();
	}
	
	cout<<"<";
	while(!q2.empty())
	{
		if(q2.size()!=1)
		{
			printf("%d, ",q2.front());
		}
		else printf("%d>",q2.front());
		
		q2.pop();
	}
}
