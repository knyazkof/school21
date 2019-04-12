#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a;
	int i;
	
	a = 0;

	while(a<=0)
	{
	a = scanf("%d",&a);
	}

	write(1,"\n",1);
	
	while(a>=0)
	{		
	i = 1;
	while(i<a-1)
	{
	write(1," ",1);
	i++;
	}
	write(1,"########",a-i);
	write(1,"  ",2);
	write(1,"########",a-i);
	write(1,"\n",1);
	a--;
	}
}
