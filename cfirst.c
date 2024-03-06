# include<stdio.h>

int main(){
    int number;
    printf("enter any number :",number);
    scanf("%d", &number);
    number>0 ? printf("Its positive \n") : printf("Its 0 or negetive \n");

    char name ='t';
    printf("my name is %c \n" ,name);



    int day; // 1 : monday,2:tuesday,3:wednesday,4:thurseday
    printf("Enter any date(1-7):");
    scanf("%d", &day);
    
    switch (day)

    {case 1 : printf("Its monday \n");
    break;
    case 2 : printf("Its tuesday \n");
    break;
    case 3 : printf("Its wednesday \n");
    break;
    case 4 : printf("Its thursday \n");
    break;
    case 5 : printf("Its friday \n");
    break;
    case 6 : printf("Its saturday \n");
    break;
    case 7 : printf("Its sunday \n");
    break;

    default : printf("Its not a valid day ");
    
    
    
   
    }
    return 0;
}

