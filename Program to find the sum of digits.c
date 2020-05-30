#include <stdio.h>
void main()
{
    int m,n,sum=0;
    printf("Enter a number:");
    scanf("%d\n",&n);
    printf("%d",n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("\nThe Sum of digits is=%d",sum);
    return(0);
}
