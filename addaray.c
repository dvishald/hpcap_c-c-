//array addition 

#include<stdio.h>
  int main(){
     int ar1[]= {10,20,30,40,50};
     int ar2[]= {50,40,30, 20,10};
     
     int result[5];
     for(int i=0; i<5;i++)
     {
     	result[i]=ar1[i]+ar2[i];
     }
    
    	for(int j=0;j<5;j++)
    	{
    	   printf("\n%d=	 Addition of two arrays  :", result[j]);
    	   }
     return 0;
  }
