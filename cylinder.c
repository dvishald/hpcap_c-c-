#include <stdio.h>

 	int main(){
 	float pi=3.1437;
 	
 	printf("enter radius and hight");
 	int rad,h;
 	scanf("%d%d", &rad,&h);
 	
 	float vol= rad*rad*h*pi;
 	
 	printf("\nvolume is %f",vol);
 	
 	float surf_area= 2*pi*rad*h;
 	printf("\nsurface Area is %f",surf_area );
 	return 0;
 	}
 	
