#include<stdio.h>
int main()
{
  int i,j,n;
  printf("\nEnter the value :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("\n");
    for(j=1;j<=(n-i);j++)
    {
        printf("  ");
    }
    for(j=1;j<=i;j++)
    {
        printf(" %d",j);
    }
    for(j=1;j<i;j++)
    {
        printf(" %d",(i-j));
    }
  }
  for(i=1;i<=n;i++)
  {
    printf("\n");
    for(j=1;j<=i;j++)
    {
      printf("  ");
    }
    for(j=1;j<(n-i);j++)
    {
       printf(" %d",j);
    }
    for(j=(n-i);j>0;j--)
    {
       printf(" %d",j);
    }
  }
  return 0;
}