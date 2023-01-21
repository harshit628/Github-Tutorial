// 30 - Check if the number is Prime or not.


#include<stdio.h>
int main(){

int  n,i,fuck = 0 ;

printf("koi number de na be");
scanf("%i",&n);

for(i = 2; i <=n/2; i++)
{
    if(n%i==0)
    {
        fuck = fuck +1;
    }
    

}

if(fuck==0)
    {
        printf("prime number he bc");

    }
else
 printf("number prime nahi   he bc");

return 0;
}                                                