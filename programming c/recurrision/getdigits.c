#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number:");
    scanf("%d",&num);
    getDigits(num);
    return 0;
}
void getDigits(int n)
{
    if(n>0)
    {
        printf("%d\t",n%10);
        getDigits(n/10);
    }
}