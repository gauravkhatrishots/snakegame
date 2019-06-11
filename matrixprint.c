#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
void  print();
void update();
int positionMap[20][20],direction;
struct pos
{
int x;
int y;
}pos;
int main()
{
pos.x=0,pos.y=0;
direction=0;
system("clear");
	for(int i=0;i<20;i++)
	{
		update();
		print();
		sleep(1);
		system("clear");
	}
}
void print()
{
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
			if(positionMap[i][j]==0)
			{
				printf(" ");
			}
			else
			printf("*");
		}
		printf("\n");
	}
}

void update()

{
	if(direction==0)
	{
		positionMap[pos.x][pos.y]=0;
		positionMap[pos.x][++pos.y]=1;
	}
	else
	{
		positionMap[pos.x][pos.y]=0;
		positionMap[pos.x][++pos.y]=1;
	}
}
