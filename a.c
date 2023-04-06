#include<stdio.h>
#include<stdlib.h>

int main()
{

	int a=21;
	
	int *b;
	b=&a;
	printf("%p\n",b);
	printf("%d\n",*b);
	
}
