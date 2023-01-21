// 12)Write a C program to accept the height of a person in centimeter and categorize the person
//    according to their height if below 150 he is dwarf if above 150 and below 200 average and 
//    above 200 tall.
#include<stdio.h>
int main(){

int h;
printf("enter the height in centimeter");
scanf("%i", &h);

if(h<150)
{
    printf("sorry you are dwarf");

}
else if(h<200 && h>=150){
printf("bro you have avrage height");
}
else if(h>=200)
{
    printf("you are tall");

}
return 0;
}