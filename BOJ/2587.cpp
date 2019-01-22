#include <iostream>
#include <algorithm>
using namespace std;
int ar[10],S;
int main()
{
	for(int x=0; x<5; x++)
	{
		cin>>ar[x];
		S+=ar[x];
	}
	sort(ar,ar+5);
	cout<<S/5<<endl<<ar[2];
}	
