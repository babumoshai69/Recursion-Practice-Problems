/*Write a recursive function to calculate the sum of digits of a number.*/

#include<stdio.h>
int fun(int a)
{
    if(a==0)
    {
        return 0;
    }
    return a%10+fun(a/10);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum=fun(n);
    printf("Sum of digits: %d",sum);
    return 0;
}
