// 36 - Accept a number and check if it is a Harshad number 
//       Harshad number is a number or an integer which is completely divisible by sum of  its digits.
//       Ex - 24 = Sum of 2+4 = 6 & 24%6 = 0

#include <stdio.h>
int main()
{
    int n, s=0, a, b;
    printf("Enter The Number\n");
    scanf("%d", &n);
    b = n;
    while (n != 0)
    {
        a = n % 10;
        n = n / 10;
        s = s + a;
    }
    if (b % s == 0)
        printf("The Number Is Harshad Number");
    else-
        printf("The Number Is Not Harshad Number");
    return 0;
}