// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for ( j = 0; j < i; j++)
//     {
//        for ( i = 0; i <= 5; i++)
//        {
//         printf("*");
//        }
//         printf("\n");
//     }
    
// }


#include<stdio.h>
int main()
{
  int i,j,a;
  printf("\nEnter the value:");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
   printf("\n");
   for(j=1;j<=(a-i);j++)
   {
     printf(" ");
   }
   for(j=1;j<=i;j++)
   {
    printf("%d",j);
   }
  }
  return 0;
}