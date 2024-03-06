# include<stdio.h>

void printfunction(){ // function defination :
    printf("This is my first C function ! yeahhh \n");
}


void returnfun(){ // function defination :
    int i;
    do{
    printf("Enter any number :");
    scanf("%d", &i);
    printf("%d\n", i);
    if (i % 2  != 0){
        break;

    }

    } while (1);
    printf("THank you \n");

}


int main(){
    printfunction(); // function call
    returnfun();     // function call
    return 0;
}