#include<stdio.h>
int main(){
	int a,b,sum, dif,mul,div;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	dif=a-b;
	mul=a*b;
	div=a%b;
    printf("\n%d+%d=%d\n" ,a,b,sum);
    printf("\n%d-%d=%d\n" ,a,b,dif);
    printf("\n%d*%d=%d\n" ,a,b,mul);
    printf("\n%d%%d=%d\n" ,a,b,div);
    return 0;
    
    
} 

