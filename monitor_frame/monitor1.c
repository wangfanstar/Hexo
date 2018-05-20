#include <stdio.h>
void funA(int a);
void funB(int a);
typedef  int (* monitorfun)(int a,int var, char * pcinfo);
int monitorinfo(int a, int var, char * pcinfo)
{
    static int times = 0;

        if (var % 500 == 0) 
        {
            printf("%s 500 %d times\n",pcinfo,  ++times);
        }
    return 0;
}
void regMonitor(int a,int var, char *pcinfo)
{
    monitorfun pf;
    pf = monitorinfo;
    pf(a,var, pcinfo);
    return;
}
int main(int argc, char * argv[])
{
    int i = 3;
    while(i-- > 1)
    { 
        funA(1000);
        funB(1000);
    }
    return 0;
}
void funB(int a)
{
    int i = 0;
   while(i < 8888) 
   {
       i++;
       regMonitor(1000,i,"funB");
   }
    return;
}
void funA(int a)
{
    int i=0;
       
   while(i < 8888) 
   {
       i++;
       regMonitor(500,i,"funA");
   }
    return;

}
