#include <stdio.h>
  float square(float n)
  {
	float sq= n*n;
	printf("%.2f\n ",sq);
	return sq;
   }  
  int main(){
  	 float x;
 	 printf("Enter a number");
  	 scanf("%f",&x);
  	 square(x);
  	 //square(4);
  	// printf("square is %.2f \n", square(5));
  	 return 0;
  	 }
  	
