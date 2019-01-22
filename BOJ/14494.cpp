#include <iostream>
#define Mod 1000000007
using namespace std;
long long int Y,X,ar[1100][1100];
long long int f(int y, int x)
{
	if(ar[y][x]) return ar[y][x];
	else if(y==1&&x==1) return ar[y][x]=1;
	else if(y==1) return ar[y][x]=f(y,x-1)%Mod;
	else if(x==1) return ar[y][x]=f(y-1,x)%Mod;
	else return ar[y][x]=(f(x-1,y-1)+f(x-1,y)+f(x,y-1))%Mod;
}
int main()
{
	cin>>Y>>X;
	cout<<f(Y,X);
}
