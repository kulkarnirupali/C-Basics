# include<stdio.h>

// 1: write a program to convert celsius into faranhead  :

float calculatecel(float celsius){
    float far= celsius * (1.8) + 32;
    return far;
}



// 2 : Write a program to calculate percentage of a student when marks are given :


int percenatge(int english,int math,int science){
    return ((english + math + science) / 3);
    
}


// 3 : Write a program to find n number of fabonacci series :

int fabi(int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }
    
    int febinm1 = fabi(n-1);
    int febinm2 = fabi(n-2);
    int actualfebi = febinm1 + febinm2;
    return actualfebi;
}

int main(){
    // first pb
    float a=37;
    float value = calculatecel(a);
    printf("temp is : %f \n",value);
    
    int b;
    printf("Enter any number :");
    scanf("%d", &b);
    float value2 = calculatecel(b);
    printf("temp is : %f \n",value2);
    

    // second pb
    int c;
    int d;
    int e;
    printf("Enter marks english :");
    scanf("%d", &c);
    
    printf("Enter marks  math:");
    scanf("%d", &d);
    
    printf("Enter marks science :");
    scanf("%d", &e);

    int total = percenatge(c,d,e);
    printf("percentage is : %d \n",total);

    // third pb
    int f;
    printf("Enter number :");
    scanf("%d", &f);
    int value3 = fabi(f);
    printf("Fabonacci of the %d is : %d ",f,value3);


    return 0;
}
