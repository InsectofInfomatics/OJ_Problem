#include <iostream>
using namespace std;
int A,B,C;
int main()
{
	cin>>A>>B>>C;
	if(A+B+C!=180) cout<<"Error";
	else if(A==B&&B==C&&C==60) cout<<"Equilateral";
	else if(A==B||B==C||A==C) cout<<"Isosceles";
	else cout<<"Scalene";
}
