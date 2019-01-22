#include <iostream>
using namespace std;
int A,B,T;
int main()
{
	cin>>A>>B;
	int T=A*60+B-45;
	if(T<0) T+=1440;
	cout<<T/60<<" "<<T%60;
}
