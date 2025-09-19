/*Write a recursive function to count the digits of an integer number and print the digits.*/

#include<stdio.h>
int fun(int a)
{
    if(a==0)
    {
        return 0;
    }
    int count=fun(a/10);
    printf("%d ",a%10);
    return count+1;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Count of digits: 1");
        printf("\nDigit: 0");
    }
    else
    {
        printf("Digits: ");
        int count=fun(n);
        printf("\nCount of digits: %d",count);
    }
    return 0;
}
