// 15) Write a C program to check whether an alphabet is a vowel or consonant. 

#include<stdio.h>
int main(){

char b;

printf("enter the alphabet");
scanf("%c",&b);

if( b == 'a' || b=='e' || b=='i' || b=='o' || b=='u' ||b=='A' || b=='E' ||b== 'I' ||b== 'O' ||b== 'U' )
{
    printf("the alphabet is vowel");
}
else
{
    printf("the alphabet is not vowel");
}

return 0;
}