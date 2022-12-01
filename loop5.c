#include<stdio.h>
void main()
{
    int i,j;
    char a=97;
    for ( i = 0; i <=5; i++)
    {
       for ( j = 1; j <i; j++)
       {
        printf("%c",a);
        a++;
       }
        printf("\n");
    }
    
}