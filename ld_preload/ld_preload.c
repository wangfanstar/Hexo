#include <stdio.h>
extern int mycompare(const char *a, const char *b);
int main(int argc, char *argv[])
{
    char * passwd = "pass";
    if (argc != 2)
    {
        printf("wrong arg num, must be 2! \n");
        return 0;
    }

    if (0 == mycompare(passwd, argv[1]))
    {
        printf("correct, it is 'pass'\n");
    }
    else
    {
        printf("wrong, you input : %s, the right is %s\n",argv[1], passwd);
    }
    return 0;
}
