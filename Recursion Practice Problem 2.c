/*Write a recursive function in C to print numbers from N to 1. */

#include<stdio.h>
void fun(int a)
{
    if(a==0)
    {
        return;
    }
    printf("%d ",a);
    fun(a-1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fun(n);
    return 0;
}
