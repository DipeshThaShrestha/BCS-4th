//program to understand the comcept of pointer 2.
#include<stdio.h>
main()
{
	int a=10,*p;// p is a interger pointer
	float b=12.5, *f;
	p= &a;
	f= &b;
	printf("Address of a=%u\n",p);
	printf("address of b=%u\n",f);
	 p= p+7;
	f= f-8;
	printf("Address of a=%u\n",p);
	printf("address of b=%u\n",f);
	 
	return 0;
}
