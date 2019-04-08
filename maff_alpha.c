#include <unistd.h>

int main (void)
{
    char a;
    char B;

    a = 'a';
    B = 'B';

    while(a <= 'z' && B <= 'Z')
    {
        write(1,&a,1);
        write(1,&B,1);
        a = a + 2;
        B = B + 2;
    }
        write(1,"\n",1);
        return 0;
}
