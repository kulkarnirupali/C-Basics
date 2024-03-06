# include<stdio.h>

void printaddress(int n){
    printf("value of 'a' is : % d \n",&n);
}


void dowork(int a, int b, int *sum,int *pro, int *avg){
    *sum = a + b;
    *pro = a*b;
    *avg = (a+b)/2;}

int main(){ // * = value , &= address of 
    
    // 1: write the Value of 'x' from its pointer to pointer
    
    int x=5;
    int *xptr = &x;
    int **xpptr = &xptr;
    

    printf("Value of 'x' from its pointer to pointer is : %d \n", **(xpptr));
    

    // 2 : swap 2 numbers , A & B :

    int a = 6;
    int b = 4;
    printf(" Initially value of 'a' is : % d \n",a);
    printf(" Initially value of 'b' is : % d \n",b);

    a = *(&b);
    printf(" After swapping value of 'a' is : % d \n",a);
    a = 6;
    b = *(&a);
    printf(" After swapping value of 'b' is : % d \n",b);
    

    // 3 : Predict the product :
    int n = 6;
    printf(" value of 'a' is : % d \n",&a);
    printaddress(n);
    

    // 4 : Return the sum , avg, product of two numbers using pointers :
    int z = 4,y=10;
    int sum,pro,avg;
    dowork(z,y, &sum, &pro, &avg);
    printf("Sum = %d,Product = %d,average= %d \n",sum,pro,avg);


    return 0;
    }


