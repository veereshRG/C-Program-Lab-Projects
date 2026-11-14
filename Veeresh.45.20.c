#include <stdio.h>
 struct student
{
    int regno;
    char name[30];
    int m1,m2,m3;
    int total;
    float percentage;
};
int main()
{
    struct student s[50];
    int n=0;
    int choice,i,search;
    FILE*fp;

    do
    {
        printf("\n\n---student menu---");
        printf("\n1.add record");
        printf("\n2.display records");
        printf("\n3.search record");
        printf("\n4.write to file");
        printf("\n5.read from file");
        printf("\n6.exit");

        printf("\nenter choice:");
        scanf("%d",&choice);

        /*1.add record*/
        if (choice==1)
        {
            printf("\nenter register number:");
            scanf("%d",&s[n].regno);

            printf("enter name:");
            scanf("%s",s[n].name);

            printf("enter 3 marks:");
            scanf("%d %d %d",&s[n].m1,&s[n].m2,&s[n].m3);

            s[n].total=s[n].m1+s[n].m2+s[n].m3;

            s[n].percentage=s[n].total/3.0;
            n++;

            printf("record added successfully!");
        }
        /*2.disply record*/
        else if (choice==2)
        {
            for (i=0;i<n;i++)
            {
                printf("\nregister number=%d",s[i].regno);
                printf("\nname=%s",s[i].name);
                printf("\ntotal=%d",s[i].total);
                printf("\npercentage=%.2f",s[i].percentage);

                if(s[i].m1>=35&&
                   s[i].m2>=35&&
                   s[i].m3>=35)
                {
                    printf("\nresult=pass");
                }
                else
                {
                    printf("\nresult=fail");
                }
            }

            }
            /*3.search record*/
            else if (choice==3)
            {
                printf("\nenter register number:");
                scanf("%d",&search);

                for (i=0;i<n;i++)
                {
                    if (s[i].regno==search)
                    {
                        printf("\nrecord founf!");
                        printf("\nname=%s",s[i].name);
                        printf("\ntotal=%d",s[i].total);
                        printf("\npercentage=%.2f",s[i].percentage);
                               break;
                    }
                }
                if(i==n)
                {
                    printf("\nrecord not found!");
                }
            }
            /*4.while to file*/
            else if (choice==4)
            {
                fp=fopen("student.txt","w");
                if(fp==NULL)
                {
                    printf("file cannot be opend!");
                }
                else
                {
                    for (i=0;i<n;i++)
                    {
                        fprintf(fp,"%d %s %d %d %d %d %.2f\n",
                                s[i].regno,
                                s[i].name,
                                s[i].m1,
                                s[i].m2,
                                s[i].m3,
                                s[i].total,
                                s[i].percentage);
                    }
                    fclose(fp);

                    printf("records saved to file!");

                }
            }

            /*5.read from filr*/
            else if (choice==5)
            {
                fp=fopen("student.txt","r");

                if (fp==NULL)
                {
                    printf("file not found!");
                }
                else
                {
                    printf("\n--records from file---\n");
                    while (fscanf(fp,"%d %s %d %d %d %d %f",
                                  &s[0].regno,
                                  s[0].name,
                                  &s[0].m1,
                                  &s[0].m2,
                                  &s[0].m3,
                                  &s[0].total,
                                  &s[0].percentage)==7)
                    {
                        printf("\nregister number =%d",
                               s[0].regno);

                               printf("\nname=%s",s[0].name);

                               printf("\ntotal=%d",s[0].total);

                               printf("\npercentage=%.2f\n",
                                      s[0].percentage);
                    }
                    fclose(fp);

                }
            }
            /*6.exit*/
            else if (choice==6)
            {
                printf("\nprogram ended!");
            }
            else
            {
                printf("\ninvalid choice!");
            }
            }
            while(choice!=6);

    return 0;
}
