// addition of idividual digit of number

#include<stdio.h>

int main(){

int sum=0;
printf("Enter number");

int num;
int temp=num;
scanf("%d" ,&num);

for(int i=num;i>0;num/=10){
sum= sum+num%10;

}

printf("%d" ,sum);

return 0;
}


