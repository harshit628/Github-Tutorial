// 8)Write a C program to check whether a given number is positive or negative.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter A Number\n");
    scanf("%d", &n);
    if (n>0)
    {
        printf("The Number Is positive\n");
    }
  else{
    printf("The Number Is negitive");
}

return 0;
}