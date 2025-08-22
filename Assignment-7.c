#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    int largest=-1;
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            largest=i;
            n=n/i;
        }
    }
    printf("%d",largest);
    return 0;
}
