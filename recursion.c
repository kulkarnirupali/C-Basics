# include<stdio.h>


int sumofn(int a){ // Sum of natural numbers :
    if(a==1){
        return 1;
    }
    int sumofn1=sumofn(a-1);
    int sumofn2 = sumofn1 + a;
    return sumofn2;
}



int factofn(int b){// Factorial of n number
    if(b==1){
        return 1;
    }
    int factof = factofn(b-1);
    int act = factof * b;
    return act;

}


int main(){
    printf("sum is : %d \n",sumofn(5));
    printf("factorial is : %d \n",factofn(5));

    return 0;
}
