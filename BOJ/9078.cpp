#include <iostream>
using namespace std;
int T,N,Cnt;
int ar[110];
int main()
{
	cin>>T;
	for(int i=0; i<T; i++)
	{
		cin>>N;
		Cnt=0;
		for(int x=0; x<N; x++) cin>>ar[x];
		for(int y=0; y<N; y++)
		{
			for(int z=0; z<y; z++)
			{
				if(ar[z]>ar[y]) Cnt++;
			}
		}
		if(Cnt%2==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
