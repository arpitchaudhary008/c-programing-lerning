#include<stdio.h>
int main(){
    int choice;
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    float a,b;
    printf("enter two number");
    scanf("%f%F",&a,&b);
    switch(choice)
    {
        case 1:
        printf("result=%f",a+b);
        break;
        case 2:
        printf("result=%f",a-b);
        break;
        case 3:
        printf("result=%f",a*b);
        break;
        case 4:
        if(b!=0){
            printf("result=%f",a/b);
        }
        else{
            printf("cannot be divided by zero");
        }
        break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}