/*Write a recursive function to find the factorial of a given number.*/

#include<stdio.h>
int fun(int a)
{
    if(a==0)
    {
        return 1;
    }
    return a*fun(a-1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact=fun(n);
    printf("Factorial: %d",fact);
    return 0;
}
