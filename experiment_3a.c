// again doing exp 3
#include<stdio.h>
int main(){
    int choice;
    float a, b;
    printf("1.Addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");   
    printf("4.division\n");

    printf("Enter your choice:");
    scanf("%d" , &choice);

    printf("enetr two number:");
    scanf("%f,%f,",&a,&b);

    switch(choice){
        case 1:
        printf("result:%.2f\n,a+b");
        break;   
        case 2:
            printf("Result = %.2f\n", a - b);
            break;

        case 3:
            printf("Result = %.2f\n", a * b);
            break;

        case 4:
            if (b != 0) {
                printf("Result = %.2f\n", a / b);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


