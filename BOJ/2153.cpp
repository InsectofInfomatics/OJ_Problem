#include <iostream>
#include <string>
using namespace std;
string a; // a= 97 A= 65 
int S,C;
int main()
{
	cin>>a;
	for(int x=0; x<a.length(); x++)
	{
		if(a[x]>=97) S+=a[x]-96;
		else S+=a[x]-38;	
	}
	for(int y=2; y<S; y++)
	{
		if(S%y==0) C=1;
	}
	if(C==1) cout<<"It is not a prime word.";
	else cout<<"It is a prime word.";
}
