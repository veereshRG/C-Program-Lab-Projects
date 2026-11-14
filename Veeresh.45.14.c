#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,key,i,count=0;

    printf("enter n:");
    scanf("%d",&n);

    printf("enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        printf("enter elements to search:");
        scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("position=%d\n",i+1);
            count++;
        }
    }
    if(count==0)
        printf("element not found\n");
    else
        printf("frequency=%d\n",count);
    return 0;
}
