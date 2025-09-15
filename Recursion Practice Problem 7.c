/*Write a recursive function to find the sum of first N natural numbers. (1+2+3 + ……+N)*/

#include<stdio.h>
int fun(int a)
{
    if(a==0)
    {
        return 0;
    }
    return a+fun(a-1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum=fun(n);
    printf("Sum of natural numbers: %d",sum);
    return 0;
}
