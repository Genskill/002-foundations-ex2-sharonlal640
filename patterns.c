#include<stdio.h>
#include<cs50.h>

int main(void)
{ int a,b,i,j,k;
  a=get_int("Enter type of pattern (1 or 2) ");
  b=get_int("Number of rows");
  switch(a)
{
  case 1:for(i=0;i<b;i++)
         { for(j=b;j>i;j--)
            { printf("#");
            }
           printf("\n");
         }
         break;
  case 2:for(i=0;i<b;i++)
         { for(j=i+1;j<b;j++)
            { printf(" ");
            }
           for(k=0;k<=i;k++)
            {printf("#");
            }
           printf("\n");
           
         }
         
 }
 return 0;
}
