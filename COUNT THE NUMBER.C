#include<stdio.h>
int main()
{
    int n,i=0;
    printf("\n enter the number :");
    scanf("%d",&n);
    while(n!=0)
    {
    n=n/10;
    i++;
    }
    printf("\n %d",i);
    return 0;
}
