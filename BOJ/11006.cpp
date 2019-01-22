#include <iostream>
using namespace std;
int T,A,B;
int main()
{
	cin>>T;
	for(int x=0; x<T; x++)
	{
		cin>>A>>B;
		for(int y=0; y<=300; y++)
		{
			for(int x=0; x<=300; x++)
			{
				if(y+2*x==A&&y+x==B)
				{
					cout<<y<<" "<<x<<endl;
					break;
				}
			}
		}
	}
}
