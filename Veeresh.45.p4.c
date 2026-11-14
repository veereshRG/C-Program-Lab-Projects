#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("enter three integers:");
   scanf("%d %d %d",&a,&b,&c);

   if (a==b&b==c)
   {
       printf("all three numbers are equal.\n");
   }
   else if (a==b)
   {
       if(a>c)
        printf("largest=%d\n",a);
        else
            printf("first and second numbers are equal.\n");
       }
       else if (a==c)
       {
           if(a>b)
            printf("largest=%d\n",a);
           else
            printf("largest=%d\n",b);

           printf("first and third numbers are equal.\n");
       }
       else if (b==c)
       {
           if(b>a)
            printf("largest=%d\n",b);
           else
            printf("largest=%d\n",a);

           printf("second and third numbers are equal.\n");
       }
       else
       {
           if(a>b)
           {
               if(a>c)
               printf("largest=%d\n",a);
               else
                printf("largest=%d\n",c);
           }
                   else
                   {
                       if(b>c)
                        printf("largest=%d\n",b);
                       else
                        printf("largest=%d\n",c);
                   }
               }
           return 0;
       }


