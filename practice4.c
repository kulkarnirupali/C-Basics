# include<stdio.h>

// Practise : keep taking numbers from user until user enters an odd number :


int main(){
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

// write program which enters a numbers from user until user enter number which is multiple of 7 :

    int k;
    do{
    printf("Enter any number :");
    scanf("%d", &k);
    printf("%d\n", k);
    if (k % 7  == 0){
        break;

    }

    } while (1);
    printf("THank you \n");
    return 0;
}
