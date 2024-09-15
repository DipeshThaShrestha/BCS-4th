#include<stdio.h>
int main()
{
    int num, res;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    res = fact (num);
    printf("The factorial of %d = %d\n",num,res);
    return 0;
}
int fact(int n)
{
    if (n==0 || n ==1)
    return 1;
    else
    return n*fact(n-1); // recursive call
}