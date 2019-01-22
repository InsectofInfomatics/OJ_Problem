#include <iostream>
using namespace std;
int A,B,C,M=0;
int main()
{
	cin>>A>>B>>C;
	if(B-A-1>M) M=B-A-1;
	if(C-B-1>M) M=C-B-1;
	cout<<M;
}
