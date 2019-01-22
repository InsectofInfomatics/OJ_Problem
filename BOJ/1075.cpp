#include <iostream>
using namespace std;
int N,F,K;
int main()
{
	cin>>N>>F;
	K=N-N%100;
	for(int x=0; x<100; x++)
	{
		if((K+x)%F==0)
		{
			if(x<10) cout<<"0";
			cout<<x;
			return 0;
		}
	}
}
