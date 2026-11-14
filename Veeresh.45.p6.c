#include <stdio.h>
#include <stdlib.h>


int main(){
    int a,b,choice;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    while(1){
        printf("\n\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Remainder");
        printf("\n6. Exit");

        printf("\n Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Addition=%d",a+b);
                break;
            case 2:
                printf("Subtraction=%d",a-b);
                break;
            case 3:
                printf("Multiplication=%d",a*b);
                break;
            case 4:
                if(b!=0){
                    printf("Remainder=%d",a%b);
                    return 0;
                }else{
                    printf("Invalid choice.");
                }
        }
    }
    return 0;
}
