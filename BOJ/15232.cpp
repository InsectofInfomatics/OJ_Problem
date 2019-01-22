#include <iostream>
using namespace std;
int N,M;
int main()
{
	cin>>N>>M;
	for(int y=0; y<N; y++)
	{
		for(int x=0; x<M; x++) cout<<"*";
		cout<<endl;
	}
}
