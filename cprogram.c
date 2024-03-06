#include<stdio.h>
int main() {
    // int a = 5 * 2 - 2 * 3 ;
    // printf("%d \n",a);

    // int b = 5 * 2 / 2 * 3 ;
    // printf("%d \n",b);

    // int c = 5 *(2/2) *3;
    // printf("%d \n",c);

    // int d = 5+2 / 2*3;
    // printf("%d \n",d);

    // int e;
    // // even - 1
    // // odd - 0
    // printf("Enter first number :");
    // scanf("%d", &e);
    // printf("%d",e % 2==0 );
  
    // Average of three numbers :
    // int a;
    // int b;
    // int c ;

    // printf("Enter any three numbers :");
    // scanf("%d", &a);
    // scanf("%d", &b);
    // scanf("%d", &c);
    // int d = (a+b+c)/3;
    // printf("%d",d);

    // int a;
    // int b;
    // int c ;

    // printf("Enter any three numbers :");
    // scanf("%d", &a);
    // scanf("%d", &b);
    // scanf("%d", &c);
    // int d;
    // printf("%d",d=a>b && a>c);
    // printf("%d",d=b>c && b>c);
    // printf("%d",d=a<c && b<c);

    
    int age;
    printf("Enter your Age :");
    scanf("%d", &age);

    if (age>18){
        printf("Adult \n");
        printf("You can vote \n");
        printf("You can drive \n");

    }
    else if (age>=13 && age<18) {
        printf("Teenager \n");
        printf("Please wait till 18\n");
    }
    else{
        printf("Not Adult or teenager \n");
        printf("Please wait till 13 \n");
    }
    
    printf("Thank you!");
    return 0;



}