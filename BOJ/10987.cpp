#include <iostream>
#include <string>
using namespace std;
string a;
char ar[]="aeiou";
int Cnt;
int main()
{
	cin>>a;
	for(int x=0; x<a.length(); x++)
	{
		for(int y=0; y<5; y++)
		{
			if(a[x]==ar[y]) Cnt++;
		}
	}
	cout<<Cnt;
}
