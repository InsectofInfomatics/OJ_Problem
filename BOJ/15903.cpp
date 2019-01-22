#include <iostream>
#include <algorithm>
using namespace std;
unsigned long long int N,K,d[1100],S;
int main()
{
	cin>>N>>K;
	for(int x=0; x<N; x++) cin>>d[x];
	
	for(int x=0; x<K; x++)
	{
		sort(d,d+N);
		S=d[0]+d[1];
		d[0]=d[1]=S;
	}
	S=0;
	for(int x=0; x<N; x++) S+=d[x];
	cout<<S;
}
