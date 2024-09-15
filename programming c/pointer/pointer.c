//program to understand the comcept of pointer
#include<stdio.h>
main()
{
	int a=10,*p;// p is a interger pointer
	printf("value of a=%d\n",a);
	printf("address of a=%u\n",&a);
	p=&a;
	printf("Address of a=%u\n",p);
	printf("Value of a=%d\n",*(&a));//value at adress(address of a)=10
	printf("Value of a=%d\n",*p); 
	return 0;
}
