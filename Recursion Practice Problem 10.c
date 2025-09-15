/*Write a recursive function to compute the power of a number (Base^power).*/

#include<stdio.h>
int fun(int a,int b)
{
    if(a==0)
    {
        return 0;
    }
    if(b==0)
    {
        return 1;
    }
    return a*fun(a,b-1);
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    int y;
    printf("Enter power: ");
    scanf("%d",&y);
    int power=fun(x,y);
    printf("Power of the number: %d",power);
    return 0;
}
