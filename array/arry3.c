#include<stdio.h>
int main()
{
    int n,i,val;
    printf("enter arry size");
    scanf("%d",&n);
    int arr[n];
    printf("enter value");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter vale for searching");
    scanf("%d",&val);
    for ( i = 0; i < n; i++)
     {
       if (arr[i]==val)
       {
         printf("element found at location %d",i+1);
         return 0;
       } 
     }
       printf(" element not found");
 }