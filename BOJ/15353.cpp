#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

string A,B;
int K=0;
stack <int> a;
stack <int> b;
stack <int> c;
int main()
{
	cin>>A>>B;
	for(int x=0; x<A.length(); x++)
	{
		a.push(A[x]-48);
	}
	for(int y=0; y<B.length(); y++)
	{
		b.push(B[y]-48);
	}
	
	while(!a.empty()||!b.empty())
	{
		if(!a.empty()&&!b.empty())
		{
			c.push((a.top()+b.top()+K)%10);
			K=(a.top()+b.top()+K)/10;
			a.pop();
			b.pop();
		}
		else if(!a.empty())
		{
			c.push((a.top()+K)%10);
			K=(a.top()+K)/10;
			a.pop();
		}
		else if(!b.empty())
		{
			c.push((b.top()+K)%10);
			K=(b.top()+K)/10;
			b.pop();
		}
	}
	if(K>0) c.push(K);
	while(!c.empty())
	{
		cout<<c.top();
		c.pop();
	}

}
