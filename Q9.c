// 9)Write a C program to find whether a given year is a leap year or not.

#include<stdio.h>
int main(){
int year;
printf("enter the year");
scanf("%i",&year);

if(year%400==0)
{
    printf("leap year he");

}
else if(year%100==0){
    printf("leap year h");
}
else if(year%4==0){
    printf("leap mhi h");
}
else{
    printf("leap year nhi he");
    
}
return 0;
}