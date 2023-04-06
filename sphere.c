#include <stdio.h>

 	int main(){
 	
 	  float pi=3.1437;
 	  int r;
 	  printf("Enter Radius \n");
 	  
 	  scanf("%d",&r);
 	  
 	  float volume = 4/3*(pi*r*r*r);
 	  printf("\nvolume of sphare is %f" , volume);
 	  
 	  float sur_ar= 4*pi*r*r;
 	   printf("\nSurface area of sphare is %f" , sur_ar);
 	   return 0;
 	   }
 	   
