# include<stdio.h>

// WTF TO print fabonacchii numbers :  
int main(){   
    int n;
    printf("Enter any number n>2 :");
    scanf("%d", &n);
    
    int fib[n];
    fib[0] =0;
    fib[1] = 1;

    for (int i=2 ; i<n ; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t",fib[i]);
    }
    
    return 0;
    }