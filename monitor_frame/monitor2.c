#include <stdio.h>
void funA(int a);
void funB(int a);
int main(int argc, char * argv[])
{
    funA(1000);
    funB(1000);
    return 0;
}

void funB(int a)
{
    int i;
    int times=0;
    for (i = 0; i < a; i++)
    {
        if (i % 500 == 0) 
        {
            printf("fun B 500 %d times\n",  ++times);
        }
    }
    return ;
}
void funA(int a)
{
    int i;
    int times=0;
    for (i = 0; i < a; i++)
    {
        if (i % 100 == 0) 
        {
            printf("100 %d times\n",  ++times);
        }
    }
    return;

}
