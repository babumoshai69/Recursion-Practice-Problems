/*Write a recursive function to check whether a number is prime.*/

#include<stdio.h>
int fun(int a,int b)
{
    if(a<=1)
    {
        printf("Not a prime number");
        return 0;
    }
    if(a==b)
    {
        printf("A prime number");
        return 0;
    }
    if(a%b==0)
    {
        printf("Not a prime number");
        return 0;
    }
    return fun(a,b+1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fun(n,2);
    return 0;
}
