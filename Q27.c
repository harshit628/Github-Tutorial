// 27 - Print the sum of all factors of a number, 50 - 1 + 2 + 5 + 10 + 25 = 43


#include<stdio.h>
int main(){

int n,i,sum = 0;

printf("enter the number of n");
scanf("%d",&n);

for(i =1; i <n; i++)
{
    if(n%i==0)
    {
    
   sum = sum+i;

   
    }
}    

printf("the sum of n is %d\n",sum);

return 0;
}