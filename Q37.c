// 37 - Fibonacci series - 0, 1, 1, 2, 3, 5, 8, 13, 21...


#include<stdio.h>
int main(){

int n,a = 0,b = 1,c;

printf("enter the numbere range please");
scanf("%d",&n);

for(int i=1; i<=n; i++)
{
    printf("%d ",a);
    c = a+b;
    a = b;
    b = c;

}

return 0;
}