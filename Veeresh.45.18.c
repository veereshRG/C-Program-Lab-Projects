#include <stdio.h>
#include <stdlib.h>

    int gcd(int a,int b)
    {
        if(b==0)
            return a;

        return gcd(b,a%b);
    }

    int factorial (int n)
    {
        if(n==0)
            return 1;
        return n*factorial(n-1);
    }

    int power(int x,int n)
    {
        if(n==0)
            return 1;

        return x*power(x,n-1);
    }
    int lcm(int a,int b)
    {
        return(a*b)/gcd(a,b);
    }
    int main()
    {
        int choice,a,b,n,x;

        printf("1.gcd\n");
        printf("2.lcm\n");
        printf("3.factorical\n");
        printf("4.power\n");

        printf("enter choice:");
        scanf("%d",&choice);

     if(choice==1)
    {
        printf("enter two numbers:");
        scanf("%d %d",&a,&b);

        printf("gcd=%d",gcd(a,b));
    }
    else if(choice==2)
    {
        printf("enter two numbers:");
        scanf("%d %d",&a,&b);

        printf("lcm=%d",lcm(a,b));
    }
    else if(choice==3)
    {
        printf("enter number:");
        scanf("%d",&n);

        printf("factorial=%d",factorial(n));
    }
    else if(choice==4)
    {
        printf("enter x and n:");
        scanf("%d %d",&x,&n);

        printf("answer=%d",power(x,n));

        printf("enter x and n:");
        scanf("%d %d",&x,&n);

        printf("answer=%d",power(x,n));
    }
    else
    {
        printf("invaild choice");
    }
        return 0;
}


