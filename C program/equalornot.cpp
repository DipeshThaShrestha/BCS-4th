#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	
    printf("\n%d<%d=%d\n" ,a,b,a<b);
    printf("\n%d>%d=%d\n" ,a,b,a>b);
    printf("\n%d!=%d=%d\n" ,a,b,a!=b);
    printf("\n%d=%d=%d\n" ,a,b,a==b);
    return 0;
    
    
} 

