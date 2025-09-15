/*Write a recursive function to find the Nth Fibonacci number.*/

#include<stdio.h>
int fun(int a)
{
    if(a==0)
    {
        return 0;
    }
    if(a==1)
    {
        return 1;
    }
    return fun(a-1)+fun(a-2);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fibonacci=fun(n);
    printf("%dth Fibonacci number is: %d",n,fibonacci);
    return 0;
}
