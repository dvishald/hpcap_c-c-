#include<stdio.h>
#include<stdlib.h>

#define N 10

int main()
{
    int *A, *B, *C;
    int i;
    
    A = (int *) malloc(N*sizeof(int));
    B = (int *) malloc(N*sizeof(int));
    C = (int *) malloc(N*sizeof(int));
    
    for(i=0;i<N;i++)
    {
        A[i] = i;
        B[i] = i;
        C[i] = 0;
    }
    
    for(i=0;i<N;i++)
    {
        printf("\nA[%d] = %d \t B[%d] = %d",i,A[i],i,B[i]);
    }
    printf("\n");
    for(i=0;i<N;i++)
    {
        C[i] = A[i] + B[i];
    }
    
    for(i=0;i<N;i++)
    {
        printf("\nC[%d] = %d ",i,C[i]);    
    }
    
    free(A);
    free(B);
    free(C);
    printf("\n");
}
