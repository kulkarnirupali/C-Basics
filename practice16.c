# include<stdio.h>




//  Q . Create a strcture address and store address of 5 persons in it :
typedef  struct Address{   
    int Houseno;
    int block;
    char city[100];
    char state[100];

} std ;



// Q 2 : Create a structure to create vector and then return a function to sum that two vectors :


struct Vector
{
    int x;
    int y;
} ;


void sum1(struct Vector v1,struct Vector v2,struct Vector sum){
    sum.x = v1.x + v1.x;
    sum.y = v2.y + v2.y;
    printf("Sum of x is %d\n",sum.x);
    printf("Sum of y is %d\n",sum.y);
}

// Q.3 Write a program to create a stracture complex and print value using array operator :

struct Complex
{
    int real;
    int imaginary;
};

typedef struct bankaccount{
    char name[100];
    int account_number;

}Acc;


int main(){
    std s1 = {10,1,"Sambhaji Nagar","Maharashtra"};
    std s2 = {20,2,"Banglore","Karnataka"};
    std s3 = {30,3,"Bhuvaneshwar","Madhya Pradesh"};
    std s4 = {40,4,"Jamnagar","Gujarat"};
    std s5 = {50,5,"Hydrabad","Telangana"};

    printf("First Person Address : ");
    printf("%d,%d,%s,%s",s1.Houseno,s1.block,s1.city,s1.state);
    printf("\n");
    

    printf("Second Person Address :");
    printf("%d,%d,%s,%s",s2.Houseno,s2.block,s2.city,s2.state);
    printf("\n");
    

    
    
    printf("Third Person Address :");
    printf("%d,%d,%s,%s",s3.Houseno,s3.block,s3.city,s3.state);
    printf("\n");


    
    printf(" Fourth Person Address : ");
    printf("%d,%d,%s,%s",s4.Houseno,s4.block,s4.city,s4.state);
    printf("\n");
    

    
    
    printf(" Fifth Person Address : ");
    printf("%d,%d,%s,%s",s5.Houseno,s5.block,s5.city,s5.state);
    printf("\n");
    


    // Q.2 :
    struct Vector v1={10,12};
    struct Vector v2 = {9,7};
    struct Vector sum = {0};
    sum1(v1,v2,sum);

    // Q . 3 :
    struct Complex number1 = {6,11};
    struct Complex *ptr = &number1;
    printf("Real part is: %d \n",ptr->real);
    printf("Inaginary part is: %d \n",ptr->imaginary);
    
    // Q.4 :

    Acc S1 = {"ABC",12345};
    printf("Account name :%s",S1.name);
    printf("Account number :%d",S1.account_number);



    return 0;
}