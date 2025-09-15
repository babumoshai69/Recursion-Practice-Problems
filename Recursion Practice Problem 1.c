/*Write a recursive function in C  to print numbers from 1 to N.*/

#include<stdio.h>
void fun(int a)
{
    if(a==0)
    {
        return;
    }
    fun(a-1);
    printf("%d ",a);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fun(n);
    return 0;
}
