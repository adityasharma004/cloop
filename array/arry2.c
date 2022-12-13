// #include<stdio.h>
// void main()
// {
//     int a[]={25,50,30,40,77};
//     printf("%d",a[3]);
// }

#include<stdio.h>
 void main()
{
    int a[10],r,i,sum=0;
    printf("Enter upto 5 Values: ");
    scanf("%d",&r);
    printf("enter element:");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    for(i=0; i<5; i++)
    {
        if(a[i]%2==0)
            sum=sum+a[i];
    }
    printf("Total Sum of Even values is: %d ",sum);
}