#include<stdio.h>
int main()
{
  int i,j,a;
  printf("\nEnter the value:");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
     printf("\n");
     for(j=i;j>0;j--)
     {
       printf("%d",j);
     }
  }
  return 0;
}