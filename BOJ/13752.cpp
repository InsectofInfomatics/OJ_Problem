#include <iostream>
using namespace std;
int N;
int ar[110];
int main()
{
	cin>>N;
	for(int x=0; x<N; x++) cin>>ar[x];
	for(int x=0; x<N; x++)
	{
		for(int y=0; y<ar[x]; y++) cout<<"=";
		cout<<endl;
	}
}
