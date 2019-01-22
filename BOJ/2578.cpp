#include <iostream>
using namespace std;
int ar[10][10],check[10][10],list[33];
int Cnt;

void evaluation()
{
	int Sum=0;
	Cnt=0;	
	for(int x=0; x<5; x++)
	{
		if(check[x][x]==1) Sum++;	
	}	
	if(Sum==5) Cnt++;
	
	Sum=0;
	for(int x=0; x<5; x++)
	{
		if(check[x][4-x]==1) Sum++;
	}
	if(Sum==5) Cnt++;
	
	for(int y=0; y<5; y++)
	{
		Sum=0;
		for(int x=0; x<5; x++)
		{
			if(check[y][x]==1) Sum++;
		}
		if(Sum==5) Cnt++;
	}
	
	for(int x=0; x<5; x++)
	{
		Sum=0;
		for(int y=0; y<5; y++)
		{
			if(check[y][x]==1) Sum++;
		}
		if(Sum==5) Cnt++;
	}
	
}
int main()
{
	for(int y=0; y<5; y++)
	{
		for(int x=0; x<5; x++)
		{
			cin>>ar[y][x];
		}
	}
	for(int x=0; x<25; x++) cin>>list[x];
	
	for(int z=0; z<25; z++)
	{
		for(int y=0; y<5; y++)
		{
			for(int x=0; x<5; x++)
			{
				if(ar[y][x]==list[z])
				{
					check[y][x]=1;
				}
			}
		}
		
		evaluation();
		if(Cnt>=3)
		{
			cout<<z+1;
			break;
		}
	}
	
}
