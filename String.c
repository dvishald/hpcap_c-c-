#include<stdio.h>
int main(){

    char name[]="Vishal";
    char city[]={'p','u','n','e','\0'};
    for (int  i = 0; city[i]!='\0'; i++)
    {
        /* code */
        printf("your city is%c",city[i]);

    }
    printf("\n your name is %s",name);
    
    return 0;
}
