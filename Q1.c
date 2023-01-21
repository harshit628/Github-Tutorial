//1) Write a C program that prints the perimeter of a rectangle to take its height and width as input

#include<stdio.h>
int main()
{
    int p,h,w;
    printf("Enter The Height Of Rectangle\n");
    scanf("%d",&h);
    printf("Enter The Width Of Rectangle\n");
    scanf("%d",&w);
    p=2*(h+w);
    printf("The Perimeter Of Rectangle Is = %d",p);
    return 0;
}