// find sum of natural numbers using recursiion.
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nSum of first %d = %d\n",num,sum(num));
    return 0;
}
int sum(int n)
{
    if(n==0)
    return 0;
    return n+sum(n-1);   
}