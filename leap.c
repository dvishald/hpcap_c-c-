// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    //printf("Hello world");
    int year;
        printf("enter year");
        scanf("\n%d",&year);
        if(year % 4 == 0 && year % 100 != 0 || year %400==0 ){
            printf("\nLeap Year");
        }
        else{
            printf("\n Not a Leap year");
        }
    return 0;
}
