
// 31 - Accept a number and print its reverse

#include<stdio.h>
int main(){

int n,r;

printf("entere the number please");
scanf("%i",&n);

while(n!=0)
{
    r = n%10;
    printf("%d",r);

    n = n/10;

}

return 0;
}