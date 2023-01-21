
// 5) Write a C program that converts kilometers per hour to miles per hour.


#include<stdio.h>
int main(){
float kmph,mph;

printf("enter the kmph");
scanf("%f",&kmph);

mph = kmph/1.609;

printf("the mph is %0.3f",mph);

return 0;
}