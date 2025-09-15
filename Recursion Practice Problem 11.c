/*Write a recursive function to find the greatest common divisor (GCD) of two numbers.*/

#include<stdio.h>
int fun(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return fun(b,a%b);
}
int main()
{
    int x;
    printf("Enter the 1st number: ");
    scanf("%d",&x);
    int y;
    printf("Enter the 2nd number: ");
    scanf("%d",&y);
    int gcd=fun(x,y);
    printf("GCD: %d",gcd);
    return 0;
}
