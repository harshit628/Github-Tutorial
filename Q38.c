// 38 - Take 2 numbers as inputs and find their HCF.

#include<stdio.h>
int main(){

int a,b,s = 0;
printf("koi do number do hcf ke liye");
scanf("%i",&a);
scanf("%i",&b);
if(a>b)
{
    for(int i=1; i>a;i++)
    {
        if(a%i==0 && b%i==0 )
        {
            s = i;
        }
    }            

    }
    if(b>a)
    {
        for(int i=1; i>a;i++)
    {
        if(a%i==0 && b%i==0 )
        {
            s = i;
        }
        
    }
    }
    printf("the hcf of the given number is%d",s);



return 0;
}
