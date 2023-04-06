#include<stdio.h>
#include<stdlib.h>

	int main(){
	int a[10];
	
	int i;
	
	for(i=0;i<10;i++){
	
	a[i]= rand()%100;
	}
	
	
	for(i=0;i<10;i++){
	 printf("\na[%d]=%d",i,a[i]);
	}
	
	printf("\n");
	printf("\n");
	
	
	int max=a[0];
	for(int j=0 ;j<10;j++)
	{
	 	if(a[j]>max)
	 	{
	 	  max= a[j];
	 	  }
	 }
	 printf("%d maximum is ",max);
	
	
	
	return 0;
	}
	
