// 28 - Print the sum of all even & odd numbers seperately.


#include<stdio.h>
int main(){

    int n,i,sum1= 0,sum2 = 0;

printf("bhai please number do");
scanf("%d",&n);
for(i = 1; i <= n; i++)
{

    if(i%2==0)
    {
        sum1 = sum1 + i;
    }
    else{
     sum2 = sum2 +i;

        }
}

printf("sum of even number %d",sum1);
printf("sum of odd number %d",sum2);

    
return 0;
}


