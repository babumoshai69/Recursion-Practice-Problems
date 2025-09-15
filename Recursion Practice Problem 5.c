/*Write a recursive function to reverse an integer  number.*/

#include<stdio.h>
int fun(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return fun(a/10,b*10+a%10);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int reverse=fun(n,0);
    printf("Reverse number: %d",reverse);
    return 0;
}
