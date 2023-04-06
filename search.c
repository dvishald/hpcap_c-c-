#include<stdio.h>
#include<stdlib.h>
// code is working

int main()
{
	int ar[10];
	int i;
	int flag = 0;
	for(i=0;i<10;i++)
	{
		ar[i]=rand()%100;
	}
	
	
	 for(int j=0 ; j<10;j++)
    {
	           printf("\n ar[%d]= %d" ,j,ar[j]);
	   
     }
     int search_val;
     printf("\n Enter value to be search\n");
     
     scanf("%d",&search_val);
     
    
     for(i=0;i<10;i++)
     {
     	if(search_val == ar[i])
     	{
     	flag = 1;
     	break;
     	}
     }
     if (flag==1)
     {
     	printf("\n Search value (%d) found in the array at index of(%d)\n",search_val,i);
     	}else
     	{
     		printf("\n Search value (%d) not found in the array.\n",search_val);
	}
	printf("\n");
	printf("\n");
	
	return 0;
}	

	
	   	
	   	

	   	
