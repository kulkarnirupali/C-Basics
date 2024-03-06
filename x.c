# include<stdio.h>

int main()

{ 
    char day;
    printf("Enter any alphabet (m,t,w,T,f,s,S):");
    scanf("%c", &day);

    switch (day)
    {
    case 'm' : printf("ITS MONDAY");
    break;
    case 't': printf("ITS TUESDAY");
    break;
    case 'w' : printf("Its wednesday");
    break;
    case 'T' : printf("Its thurssday");
    break;
    case 'f': printf("ITS Friday");
    break;
    case 's' : printf("ITS Saturday");
    break;
    case 'S': printf("ITS Sunday");
    break;
        
    default: printf("Please check the alphabet carefully .");
    }

}
