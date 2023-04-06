#include<stdio.h>
int Recur (int a)
{
	if(a==1)
      {
	return 1;
      }
	return (a*Recur(a-1));
	
}
int main()
{
	printf("\n %d factoril of ",Recur (5));
	
return 0;	 
}

 
 

