// 33 - Accept a number and check if it is a armstrong number (Sum of cube of all digits will be equal to origional number)
//        Ex - 407 = 64 + 0 + 343 = 407
//               153 = 1 + 125 + 27 = 153

#include<stdio.h>
int main(){

int n,m,arm = 0,r;

printf("entere any number");
scanf("%d",&n);
m = n;

while(n>0)
{
    r = n%10;
    arm = r*r*r+arm;
    n = n/10;
}

if(m==arm)
{
    printf("fuck this is armstrong number");

}

else{
    printf("nahi he bc");

}

return 0;
}