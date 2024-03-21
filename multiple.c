#include <stdio.h>    
int main ()
  {
   int i, j;
    printf("输出简化九九乘法表：\n");
    for (i=1;i<=9;i++)
    { for (j=1;j<=9;j++)
          printf ("%d*%d=%-4d",j,i,i*j);
      printf ("\n");
    } 
    return 0;
  } 

