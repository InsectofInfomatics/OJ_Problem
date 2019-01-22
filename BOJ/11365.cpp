#include <iostream>
#include <string>
using namespace std;
string a;
string b="END";
int main()
{
	while(1)
	{
		getline(cin,a);
		if(a==b) break;
		for(int x=a.length()-1; x>-1; x--) cout<<a[x];
		cout<<endl;
		
	}
}
