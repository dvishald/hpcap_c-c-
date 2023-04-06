#include<stdio.h>
 void update(int *a, int *b, int *c)
 {
 	*a=*a+5;
 	*b=*b+5;
 	*c=*c+5;
 }
 	 void update1(int a, int b, int c)
 	{
 	  a=a+5;
 	  b=b+5;
 	  c=c+5;
 	  printf("\n Update1: a=%d \t b=%d\t c=%d \n", a,b,c);
 	  
	 }
	 
	 int main()
	 {
	 	int a,b,c;
	 	a=10;
	 	b=20;
	 	c=30;
	 	
	 	update(&a,&b,&c);
		//update1(a,b,c);
		
		 printf("\n a=%d \t b=%d\t c=%d \n", a,b,c);	 
	 }
