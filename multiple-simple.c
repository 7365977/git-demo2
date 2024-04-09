#include <stdio.h>    
int main ()
  {
   int i, j;
    printf("Êä³ö¼ò»¯¾Å¾Å³Ë·¨±í£º\n");
    for (i=1;i<=9;i++)
    { for (j=1;j<=i;j++)
          printf ("%d*%d=%-4d",j,i,i*j);
      printf ("\n");
    } 
    return 0;/*git remote demo*/
  } 

