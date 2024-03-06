# include<stdio.h>

// int main()

// { 
//     printf("Hello C\n");
//     char name ='#';
//     printf("My name is %c \n",name);
//     return 0;

// }

// input function in c 

// int main(){
//     int age;
//     int name;
//     printf("Enter first number :");
//     scanf("%d", &age);

//     printf("Enter second number:");
//     scanf("%d", &name);
    
//     int c=age + name;
//     printf("Sum is : %d",c);
//     return 0;
// }

// Area of a Square :
// int main(){
//     int Area;
//     printf("Enter side :");
//     scanf("%d", &Area);
//     printf("Area is : %d",Area*Area);
//     return 0;
// }

// Area of a circle :
int main(){
    float Radius;
    float pi=3.14;
    printf("Enter Radius :");
    scanf("%f", &Radius);
    float area= (Radius*Radius)*pi;
    printf("Area is : %f",area);
    return 0;
}
