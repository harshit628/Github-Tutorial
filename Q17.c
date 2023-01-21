// 17)Accept two numbers from user and swap their values

#include<stdio.h>
int main(){

int a,b,c;

printf("enter the value of a");
scanf("%i",&a);

printf("enter the value of b");
scanf("%i",&b);

c=a;
a=b;
b=c;
printf("a=%i b=%i",a,b);

return 0;
}