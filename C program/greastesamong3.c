#include<stdio.h> //take 3 number and check which one is greatest
int main()
{
	int a,b,c;
	prinf("Enter three Number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("\n%d is largesr\n",a);
	}
	else if(b>a && b>c)
	{
			printf("\n%d is largesr\n",b);
	}
	else{
			printf("\n%d is largesr\n",c);
	}
	return 0;
}

