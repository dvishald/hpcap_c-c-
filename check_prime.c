// Numberis prime or not
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
	int main(){
	
	printf("Enter the number \n");
	
	int num;
	scanf("%d", &num);
	int i;
	
	for(i=2;i<=sqrt(num);i++){
	
	  if(num%i==0)
	 {
	
	   break;
	  }
	}
	
	if(num%i==0)
	{
	printf("\n Numberis prime\n %d ",num);
	}
	
	else{
	printf("\n Number is not prime number %d\n",num);
	}
	
	}
	 
