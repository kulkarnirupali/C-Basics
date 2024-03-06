# include<stdio.h>

int main(){

    int *ptr ; // astrous of ptr 
    int x;

    ptr = &x; // address of 
    *ptr =0; // x=0


    printf("x is %d \n",x);  // x=0
    printf("*ptr is %d \n",*ptr); // *ptr = 0


    *ptr += 5;
    
    printf("x is %d \n",x);
    printf("*ptr is %d \n",*ptr);

    (*ptr) ++;
    
    printf("x is %d \n",x);
    printf("*ptr is %d \n",*ptr);


    return 0;
}