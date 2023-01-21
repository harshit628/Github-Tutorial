// 4)Write a program that converts Centigrade to Fahrenheit.


#include<stdio.h>
int main(){
    float cel,Fer;

printf("enter the centigrate");
scanf("%f",&cel);

Fer = (cel*9/5)+32;
printf("so we have %0.2f Fahrenheit",Fer);


return 0;
}