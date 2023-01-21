// 2)Write a C program that takes hours and minutes as input, and calculates the total number 
//    of minutes

#include<stdio.h>
int main(){
int hr,min,ttl;
printf("enter the hours");
scanf("%i",&hr);

printf("enter the minuts");
scanf("%i",&min);
ttl =(hr*60)+min;
printf("the total minuts are %i",ttl);


return 0;
}