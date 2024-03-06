# include<stdio.h>

int main(){
    int number;
    printf("Enter a digit : \n");
    scanf("%d" ,&number);
    if (number>=0){
        printf("Positive number \n");
        if (number % 2 ==0){
            printf("Its Even \n");
        } else{
            printf("Its odd \n");
        }

    }
    else{
        printf("Negetive number .\n");
    }

    int marks;
    printf("Enter marks of a student :\n");
    scanf("%d", & marks);
    if (marks >=30 && marks <= 100){
        printf("Congrates ! You are passed .\n");
    } else{
        printf("Sorry . Better luck next time .\n");}
    
    // diffrents category of marks :
    int mark;
    printf("Enter marks of a student : \n");
    scanf("%d", & mark);
    if (mark < 30){
        printf(" You are not passed since its C grade .\n");
    } 
    else if (mark >= 30 && mark < 70){
        printf(" You are passed since its B grade .\n");

    }
    else if  (mark >= 70 && mark < 90){
         printf(" You are passed since its A grade .\n");
    }
    else {
        printf("Congrates ! You are passed with A+ grade .\n");

    }
   return 0;
}
