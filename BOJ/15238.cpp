#include <iostream>
#include <string>
using namespace std;
int ar[400],Max,P,N;
string a;
int main()
{
	cin>>N>>a;
	for(int x=0; x<a.length(); x++)
	{
		ar[a[x]]++;
	}
	for(int x=97; x<=122; x++)
	{
		if(ar[x]>Max)
		{
			Max=ar[x];
			P=x;
		}
	}
	cout<<(char)P<<" "<<Max;
}
