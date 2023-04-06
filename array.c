//array 

#include<stdio.h>
	int main(){
	int rn[]={1,2,3,4,5};
	float marks[5];
	marks[0]=50.4;
	marks[1]=78.4;
	marks[2]=89.4;
	marks[3]=65.4;
	marks[4]=53.4;
	
	for(int i=0;i<5;i++)
	{
	printf("Roll %d=%.2f\n ",rn[i] ,marks[i]);
	}
}
