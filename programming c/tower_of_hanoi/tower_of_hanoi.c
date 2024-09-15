#include<stdio.h>
int main()
{
    char src='A',dest='C',aux='B';
    int n;
    printf("\nEnter the number of discs:");
    scanf("%d", &n);
    move(n,src,aux,dest);
    return 0;
}
void move(int n, char src, char aux, char dest)
{
if(n==1)
    {
        printf("\n move %d from %c to %c\n",n,src,dest);
    }
    else{
        move(n-1, src,dest,aux);
        printf("\n move %d from %c to %c\n",n,src,dest);
        move(n-1,aux,src,dest);
    }
    return 0;
}