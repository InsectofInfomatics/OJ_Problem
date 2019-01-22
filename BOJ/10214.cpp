#include <iostream>
using namespace std;
int T,A,B,a,b;
int main()
{
	cin>>T;
	for(int x=0; x<T; x++)
	{
		A=B=0;
		for(int y=0; y<9; y++)
		{
			cin>>a>>b;
			A+=a;
			B+=b;
		}
		if(A>B) cout<<"Yonsei";
		else if(A<B) cout<<"Korea";
		else cout<<"Draw";
		cout<<endl;
	}
}
