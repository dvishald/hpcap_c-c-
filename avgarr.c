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
	
	
	float avg=0;
	int sum=0;
	for(int j=0 ;j<10;j++)
	{
	 	sum+=a[j];
	 	  
	}
	printf("%d sum  " ,sum);
	avg=sum/10;
	printf("%f avarage is ",avg);
	return 0;
	}
	
