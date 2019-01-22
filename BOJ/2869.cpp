#include <iostream>
using namespace std;
int A,B,V,C,S;
int main()
{
	cin>>A>>B>>V;
	C=A-B;
	
	V-=A;
	S+=V/C;
	if(V%C>0) S++;
	S++;
	cout<<S;
}
