// 25 - Print all the numbers which are either divisible by 3 or 5 in a range


#include<stdio.h>
int main()
{
     int n,i;
    printf("Enter The Number\n");
    scanf("%d",&n);
    
    for ( i = 1; i < n; i++)
    {
        if(n%i==0)
        {
            printf("The Factors Are %d\n",i);
        }
    }
    return 0;
    
}