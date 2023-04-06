#include<stdio.h>

int main()
{

printf("enter two numbers");
int a, b;
scanf("%d%d",&a,&b);
int temp;
temp=b;
b=a;
a=temp;

printf("%d,%d",a,b);
return 0;




}
