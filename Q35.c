//35. Accept a number and check if it is a strong number or not

#include<stdio.h>
int main(){

int n ,fact=1 ,sum = 0,i,m=0,a;
printf("koi number do bhai check krne ke liye");
scanf("%d",&n);
m=n;
while(n!=0)
{
 a=n%10;
 n = n/10;
 
 for (i = 1; i<=a; i++)
{
   
    fact = fact*i;
 
}
 sum = sum + fact;
    fact = 1;
}


if(sum == m)
{
    printf("strong number");

}
else{
   printf("nahi he bhai");
}
return 0;
}