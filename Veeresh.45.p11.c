#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i;
long long fact=1;
int a=0,b=1,c;

printf("enter a non-negative integer:");
scanf("%d",&n);

//factorial
for(i=1;i<=n;i++)
        fact=fact*i;

printf("factorial=%11d\n",fact);

//fibonacci series
printf("fibonacci series:");
for(i=1;i<=n;i++)
{
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
}
return 0;
}
