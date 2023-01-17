// 32 - Accept a number and check if it is a pallindromic number (If number and its reverse are equal)
//        Ex - 12321 - Rerverse - 12321


#include<stdio.h>
int main(){

int n,m,sum = 0,r;

printf("enter the number to check weather the number is pallindromic is not ");
scanf("%d",&n);
m = n;

while(n>0)
{
    r = n%10;     //here r is the remender
    sum = r+(sum*10); 
    n = n/10;

}
if(m==sum)
{
    printf("fuck the number is pallindromic");

}
else{
    printf("nahi he");
}




return 0;
}

