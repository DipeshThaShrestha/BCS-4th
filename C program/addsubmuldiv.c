#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Enter two numbers:  ");
    scanf("%d%d",&a,&b);
    getchar();
    printf("\nPRESS +::ADD -::SUB *::MUL /::DIV\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+': printf("\nsum=%d\n",a+b);break;
        case '-': printf("\ndiff=%d\n",a-b);break;
        case '*': printf("\nproduct=%d\n",a*b);break;
        case '/': printf("\nquo=%d\n",a/b);break;
        default: printf("\n invalid choice\n");break;
    }
}

