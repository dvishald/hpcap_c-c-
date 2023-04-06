#include<stdio.h>
#include<stdlib.h>
#define N 100

 		struct student{
 		 int sub1;
 		  int sub2;
 		   int sub3;
 		  };
 		  
 		  int calc_total_marks(int a,int b,int c)
 		  {
 		  	int total= a+b+c;
 		  	return total;
 		  }
 		  
 	int main()
 	{
 		struct student hpcap[N];
 		int total_marks;
 		int pass_count;
 		int i;
 		
 		for(i=0;i<N;i++)
 		{
 		
 		    hpcap[i].sub1=rand()%100;
 		    hpcap[i].sub2=rand()%100;
 		    hpcap[i].sub3=rand()%100;
 		}
 			pass_count=0;
 			for(i=0;i<N;i++)
 			{
 				total_marks=calc_total_marks(hpcap[i].sub1,hpcap[i].sub2,hpcap[i].sub3);
 				
 				if(total_marks>120)
 				{
 				
 					pass_count++;
 				}
 			}
 				printf("\n total pass :%d ",pass_count);
 				printf("\n total fail :%d \n ", N-pass_count);

        return 0;
    }
 		
 	
    

