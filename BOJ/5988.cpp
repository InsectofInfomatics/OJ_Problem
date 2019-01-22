#include <iostream>
#include <string>
using namespace std;
int N;
string a;
int main()
{
	cin>>N;
	for(int x=0; x<N; x++)
	{
		cin>>a;
		
		if((a[a.length()-1]-48)%2==0) cout<<"even\n";
		else cout<<"odd\n";
	}
}
