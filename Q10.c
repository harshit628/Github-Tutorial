// 10) Write a C program to read the age of a candidate and determine whether it is eligible
    // for casting his/her own vote.

#include<stdio.h>
int main(){
    int age;

printf("apnij age bata na be");
scanf("%i",&age);

if(age>18||age==18)
{
    printf("bro you are eligble for the vote");

}
else
{
    printf("sorry bro vote nhi de paaoge");

}

return 0;
}