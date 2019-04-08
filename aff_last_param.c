#include<unistd.h>

int main(int argc, char *argv[])
{
    int i;

    i = 1;

    if(argc < 2)
        {
            write(1,"\n",1);
        }
    else
    {
        while(argv[argc-1][i] != '\0')
        {
            i++;
        }
        write(1,argv[argc-1],i);
        write(1,"\n",1);
    }
}
