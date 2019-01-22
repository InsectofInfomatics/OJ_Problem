#include <iostream>
using namespace std;
string a;
string b="#";
char c[]="aeiouAEIOU";
int main()
{
	while(1)
	{
		getline(cin,a);
		if(a==b) break;
		
		int Cnt=0;
		for(int x=0; x<a.length(); x++)
		{
			for(int y=0; y<10; y++)
			{
				if(a[x]==c[y]) Cnt++;
			}
		}
		cout<<Cnt<<endl;
	}
}
