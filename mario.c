#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
int a;
int i;

a = get_int("Height: ");
i = 1;

while(i<=a)
{
write(1,"        ",a-i);
write(1,"########",i);
write(1,"  ",2);
write(1,"########",i);
write(1,"\n",1);
i++;
}
return (0);
}
