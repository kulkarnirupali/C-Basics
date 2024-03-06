# include<stdio.h>
// define variable out side the loop then while (condition) and print statement lastly updation condition :
int main(){
    //1 
    int i=1;
    while (i<=5)
    {
        printf("Hello coder ! \n");
        i ++;
    }
    

    // 2
    char ioa='P';
    while (ioa<='S')
    {
        printf("%c \n",ioa);
        ioa ++;
    }
    

    // 3 : Float :
    float o=3.0;
    while (o<=100)
    {
        printf("%f \n",o);
        o = o*3;
    }
    

    // Practise Q : print from 0 to input number given by user :
    int j;
    printf("Enter a number :\n");
    scanf("%d", &j);
    int k=0;
    while(k <= j){
        printf("%d \n",k);
        k++;

    } 

    // using for loop : 
    int p;
    int q;
    printf("Enter a number :\n");
    scanf("%d", &q);
    for (p=0;p<=q;p++){
        printf("%d \n",p);

    }

    return 0;
}