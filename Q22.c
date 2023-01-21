// 22 - Take a number as input and print its table
//        5 * 1 = 5
//        5 * 2 = 10 ... up to 10 termm


#include<stdio.h>
int main(){

int n,i;

printf("entere the value of n");
scanf("%d",&n);

for(i = 1; i <11; i++)
{
    printf("%d * %d = %d\n" ,n,i,(n*i));

}


return 0;
}