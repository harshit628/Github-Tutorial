// 34 -  Accept a number and check if it a perfect number or not.
//       A number whose sum of factors(excluding number itself)  = Number 
//       Ex -  6 = 1, 2, 3 = 6

#include<stdio.h>
int main(){
int n,i,sum = 0;
printf("ek number de do bhai");
scanf("%i",&n);
for(i = 1; n > i; i++)
{
     if(n%i==0)
     {
      sum = sum + i;

     }
     
}
if(n == sum)
{
    printf("fuck the number is perfect%d",sum);

}
else
{
    printf("nahi he bhai");
}
return 0;
}

