# include<stdio.h>
int main(){
   char k='i';
   do{
    printf("%c \n",k);
    k ++;
   }while (k <='n');
   
   
   // practice Q : Print the sum of first 'n' Natural numbers :
    int j;
    printf("Enter a number :\n");
    scanf("%d", &j);
    int sum=0;
    for (int i=1;i <=j;i++){
        sum = sum + i; //sum +=1

    }
    printf("total sum is %d \n",sum);
    for (int i=j;i >=1;i--){
        printf("%d \n",i);

    }

   
    return 0;
}
