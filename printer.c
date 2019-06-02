#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
void delay(int x);
void print(int ,int);
int main()
{
for (int i=0;i<4;i++)
{
	for(int j=0;j<4;j++)
	{
		print(i,j);
		sleep (1);
	}
sleep (1);
system("clear");
}
}


void delay(int timems)
{
	while(timems)
	timems--;
}

void print(int x,int y)
{
	for(;x>0;x--)
	{
		printf("\n");

	}
	for(;y;y--)
	{
		printf("\t");
	}
printf("*");
}
