// 13)Write a C program to find the largest of three numbers.
#include<stdio.h>
int main(){
int a,b,c;
printf("enter the three number");
scanf("%i %i %i",&a,&b,&c);

if(a>b && a>c)
{

    printf("a is the largest number");

}
else if(a<b && b>c)
{

    printf("b is the largest number");

}
else
{
    
    printf("c is the largest number");

}
return 0;
}