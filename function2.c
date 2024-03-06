# include<stdio.h>

int printfunction(int a,int b){
    return a+b;
}



void printtable(int n ){ // formal parameter 
    for (int i=1;i<=10;i++){
        printf("%d \n",i*n);
    }
}


int main(){
    int a;
    int b;
    printf("Enter any number :");
    scanf("%d", &a);
    
    printf("Enter any number :");
    scanf("%d", &b);

    int sum=printfunction(a,b);
    printf("Sum is : %d \n",sum);
    

    int n ; 
    printf("Enter any number :");
    scanf("%d", &n);
    printtable(n);  // Actual Parameter 
    
    return 0;
}
