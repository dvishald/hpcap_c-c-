#include<stdio.h>
#include<stdlib.h>

#define N 10

int main()
{
	int **A, **B, **C;
	int i,j,k;
	
	A=(int ** ) malloc(N*sizeof(int *));
	B=(int ** ) malloc(N*sizeof(int *));
	C=(int ** ) malloc(N*sizeof(int *));
	
	if((A== NULL)||(B== NULL)||(C== NULL))
	{
		printf("\n cannot allowcate memory");
		exit(-1);
	
	}
	
	for(i=0;i<N;i++)
	{
		A[i]=(int *) malloc(N*sizeof(int *));
	        B[i]=(int *) malloc(N*sizeof(int *));
	        C[i]=(int *) malloc(N*sizeof(int *));
		
	}
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
			        A[i]=1;
				B[i]=1;
				C[i]=0;
			}	
		
		}
	printf("matrix A : \n");
	
	for(i=0;i<N;i++)
	{
	for(i=0;i<N;i++)
		{
		
		printf("%d",A[i]);
		}
		printf("\n");
	}
	
		}
	printf("matrix B : \n");
	
	for(i=0;i<N;i++)
	{
	for(i=0;i<N;i++)
		{
		
		printf("%d",B[i]);
		}
		printf("\n");
	}
	
	for(i=0;i<N;i++)
	{
	        for(i=0;i<N;i++)
		{
		
		//printf("%d"B[i]);
		     C[i][j]=A[i][j]+B[i][j];
		}
		//printf("\n");
	}
	
	for(i=0;i<N;i++)
	{
		free(A[i]);
		free(B[i]);
		free(C[i]);
	}
	
	        free(A);
		free(B);
		free(C);
return 0;	
}
