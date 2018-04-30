#include <stdio.h>
void funA();
int main(int argc, char * argv[])
{
    funA();
    return 0;
}

void funA()
{
    int i;
    int times;
    for (i = 0; i < 10000; i++)
    {
        if (i % 100 == 0) // for test 
        {
            printf("100 %d times\n",  ++times);
        }
    }
    return;

}
