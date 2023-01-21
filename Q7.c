// 7)Write a C program to check whether a given number is even or odd.


#include <stdio.h>
int main()
{
    int n;
    printf("Enter A Number\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The Number Is Even\n");
    }
  else{
    printf("The Number Is Odd");
}

return 0;
}
