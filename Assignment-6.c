#include<stdio.h>
int Fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return Fibonacci(n-1) + Fibonacci(n-2);
}
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    printf("fibonacci number at position %d is %d\n", n, Fibonacci(n));
    return 0;
}

