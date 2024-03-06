#include<stdio.h>

int main(){
// print odd jumbers betn 5 to 50 :    
    for(int i=5;i<=50;i++){
        if(i % 2 != 0){
        printf("%d\n",i);}
        }
// print factorail of a number given by user :
    int n ;
    printf("Enter any number \n :");
    scanf("%d" ,&n);
    int fact = 1;
    for (int i=1;i<=n;i++){
        fact = fact * i;

    }    
    printf("Factorial is : %d \n",fact);

// Print a table of a number given by user 'n' in the reverse order :
    int x;
    printf("Enter any number \n :");
    scanf("%d" ,&x);
    for (int i=10;i>=1;i--){
        printf("%d \n",i*x);

    }
// Calculate the sum of all numbers betn 5 to 50 :
    int l=50;
    int sum=0;
    for(int i=5;i<=l;i++){
        sum = sum + i;
    }
    printf("sum is : %d \n",sum);
    return 0;
}