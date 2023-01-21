// 29 - Sum of digits of a number, 936 = 18

#include<stdio.h>
int main(){

int n,m,sum=0;

printf("koi number de be ");
scanf("%d",&n);

while(n!=0)
{
    m = n%10;
    n = n/10;
    sum = sum + m;

}

printf("the sum of the number is %d",sum);


return 0;
}