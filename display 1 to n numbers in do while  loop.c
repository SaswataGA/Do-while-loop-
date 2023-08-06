#include<stdio.h>
int main ()
{
    int a,b;
    b=1;
    printf("Enter the total number of value : ");
    scanf("%d",&a);
    do
    {
        printf(" %d ",b);

    }
    while (++b<=a);
}
