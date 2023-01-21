// 39 - Find the LCM of two numbers
#include<stdio.h>
int main(){
int a,b;
printf("enter the two numbers");
scanf("%d,%d",&a,&b);
for(int i = 1;i<a*b;i++)
{
    if(i%a==0&&i%b==0)
    {
        break;
    }
    printf("%d",i);
}
return 0;
}