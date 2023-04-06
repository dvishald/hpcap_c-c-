#include<stdio.h>
int main(){

    char name[]="Vishal";
     char city[]={'p','u','n','e','\0'};
     
     char state[]= "maharashtra";
    // for (int  i = 0; city[i]!='\0'; i++)
    // {
    //     /* code */
    //     printf("%c",city[i]);

    // }
    // printf("\n your name is %s",name);
    
    // return 0;

    //string functions

   // printf("\nString Length: %ld",strlen(name));


    // strcpy(name,city);
    // printf("\n%s name after copy" ,name);


    strcat(name,state);
    printf("\n name after concat %s", name);
    return  0;
}
