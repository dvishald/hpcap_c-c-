#include <stdio.h>
     	 int main()
     	 {
     	  
     	  int num1,num2;
     	    
     	  printf("enter two numbers ");
     	  scanf ("%i%i",&num1,&num2);
     	  printf("the and %i\n",num1<num2 &&num2>300);
     	  printf("OR %i\n",num1<=num2 || num1>=num2);
     	  printf("Not %i\n",!(num1>num2));
     	  return 0;
         }
         
