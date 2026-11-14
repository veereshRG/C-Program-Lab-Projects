#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter two integers");
    scanf("%d %d", &a, &b);
    printf("sum=%d\n", a+b);
    printf( "diffrence =%d\n", a-b);
    printf("product = %d\n", a*b);
    if(b!=0)
    {
        printf("quotient= %d\n", a/b);
        printf("reminder= %d\n", a%b);
    }
    else
    {


        printf("division and rimainder are not possible because divisor is zero is zero.\n");
    }

    return 0;
}
