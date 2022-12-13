#include<stdio.h>
void main()
{
    int a[10],r,i,sum=0;
    printf("enter r=");
    scanf("%d",&r);
    printf("enter element=");
    for ( i = 0; i < r; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sum =");
    for ( i = 0; i < r; i++)
    {
        sum = sum +a[i];
    }
    printf("%d",sum);
    
}
