// 3)Write a program in C that takes minutes as input, and display the total number of hours and
//   minutes.

#include<stdio.h>
int main(){
    int min,hr;

printf("enter the minutes");
scanf("%d",&min);

hr = min/60;
min = min%60;
printf("the totala are %d hours and %d minutes" ,hr,min);

return 0;
}