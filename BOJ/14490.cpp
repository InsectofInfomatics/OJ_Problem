#include <iostream>
#include <cstdio>
using namespace std;
int a,b;

int f(int A,int B)
{
	return B>0?f(B,A%B):A;
}
int main()
{
	scanf("%d:%d",&a,&b);
	printf("%d:%d",a/f(a,b),b/f(a,b));
	
}
