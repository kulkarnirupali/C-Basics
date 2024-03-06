# include<stdio.h>
# include<math.h>
void circlearea(int n ){ 
    float pi=3.14;
    printf(" Square of cirle is : %f \n",pi *pow(n,2)); // power returns double value so %f is used to return float value :
}


void squarearea(int b ){
    printf(" Area of square is : %d \n",b*b);

}


void rectangle(int d,int c){
    printf("Area of reactangle is : %d",d*c);
}


int main(){
    int a;
    printf("Enter any number :");
    scanf("%d", &a);
    
    
    circlearea(a);
    
    int b;
    printf("Enter length :");
    scanf("%d", &b);
    
    squarearea(b);

    int c;
    printf("Enter length :");
    scanf("%d", &c);

    int d;
    printf("Enter width :");
    scanf("%d", &d);
    
    
    rectangle(c,d);
    
    
    return 0;
}
