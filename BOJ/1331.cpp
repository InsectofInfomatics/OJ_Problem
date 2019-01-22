#include <iostream>
using namespace std;
int check[330][10];
char A[44];
int B[44];
int f(int x)
{
	return x>0?x:-x;
}
int main()
{
	for(int x=0; x<36; x++) cin>>A[x]>>B[x];
	for(int x=0; x<36; x++)
	{
		if(check[A[x]][B[x]]==1) 
		{
			cout<<"Invalid";
			return 0;
		}
		else  
		{
			check[A[x]][B[x]]=1;
			
			if(x!=0)
			{
				if(((f(A[x-1]-A[x])==2&&f(B[x-1]-B[x])==1)||(f(A[x-1]-A[x])==1&&f(B[x-1]-B[x])==2))) ;
				else 
				{
					cout<<x<<"*";
					cout<<"Invalid";
					return 0;
				}
			}
			
		}
	}
	if(((f(A[0]-A[35])==2&&f(B[0]-B[35])==1)||(f(A[0]-A[35])==1&&f(B[0]-B[35])==2)));
	else
	{
		cout<<"Invalid";
		return 0;
	}
	
	cout<<"Valid";
}

