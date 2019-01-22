#include <iostream>
using namespace std;
int a;
int Min=101;
int Sum=0;
int main()
{
	for(int x=0; x<7; x++)
	{
		cin>>a;
		if(a%2==1&&Min>a) Min=a;
		if(a%2==1) Sum+=a;
	}
	if(Min==101) cout<<-1;
	else cout<<Sum<<endl<<Min;
}
