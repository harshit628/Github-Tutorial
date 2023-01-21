// 26 - Print all the factors of a number.


#include<stdio.h>
int main(){

int i,n;

printf("enter the number");
scanf("%d",&n);

for(i = 1; i < n; i++)
{
    if(n%i==0)
    {
        printf("the factorial of n is %d\n",i);
        
    }
}


return 0;
}