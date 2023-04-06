//pointers

#include<stdio.h>
#include<string.h>

	int main(){
	int num1 = 12, num2 = 45;
	int *p1, *p2;
	p1=&num1;
	p2=&num2;
	printf("Adress1: %p\n", p1);
	printf("Adress2: %p\n", p2);
	
	printf("First Data: %d\n", *p1);
	printf("Second Data: %d\n", *p2);
	return 0;
	
	}
