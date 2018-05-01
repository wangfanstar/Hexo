#include <stdio.h>
#include <stddef.h>
unsigned short CheckSum(void * Buf, size_t Size);
int main(int argc, char *argv[])
{
    int a[] ={0x1,0x3,0x4,0x9,0x9,0x0,0x34};
    unsigned short b = 0;
    b = CheckSum(a, sizeof(a));
        printf("%x, %d \n",b,b);
    return 0;
}
unsigned short CheckSum(void * Buf, size_t Size)
{
  unsigned short CheckCode = 0;
  unsigned long sum = 0;
  unsigned short * p = Buf;
  while(Size > 1)
  {
    sum += *p;
      p++;
    Size = Size - 2;
  }
  
  /* 如果数据大小非偶数 */
  if (Size == 1)
  {
    sum += *(unsigned char *)p;
  }
  
  /* 进位加法 */
  while ((sum >> 16) > 0)
  {
     sum = (sum & 0xff) + (sum >> 16);           
  }
         
  return ~(unsigned short)sum;
  
}
