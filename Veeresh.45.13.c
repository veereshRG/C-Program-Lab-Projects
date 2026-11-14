#include <stdio.h>

int main()
{
    int a[100],n,i;
    int sum=0,max,min;
    int even=0,odd=0;
    float average;

    printf("Enter n:");
    scanf("d",&n);

    printf("Enter elements:\n");

    for(i= 0;i<n;i++)
        scanf("%d %d",&a[i]);

    max=min=a[0];

        for(i=0;i<n;i++)
    {
        sum=sum+a[i];

        if(a[i]>max)
            max=a[i];

        if(a[i]<min)
            min=a[i];

        if (a[i]%2==0)
            even++;
        else
            odd++;
    }
        average=(float) sum/n;
        printf("Sum=%d\n",sum);
        printf("Average=%.2f\n",average);
        printf("Largest=%d\n",max);
        printf("Smallest=%d\n",min);
        printf("Even elements=d\n",even);
        printf("Odd 5elements=%d\n",odd);

    return 0;
}
