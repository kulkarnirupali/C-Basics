  # include<stdio.h>
// define variable out side the loop then while (condition) and print statement lastly updation condition :
int main(){
  
  
  
  // Practice : print a table of number given by user :
    int z;
    printf("Enter a number :");
    scanf("%d", &z);
    for (int i=1;i<=10;i++){
        printf("%d \n", z*i);
    }
    return 0;
}
