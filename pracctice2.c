# include<stdio.h>

int main(){
     // Identify lowercase and uppercase in  the input word pr string :
    char st;
    printf("Enter string/character :");
    scanf("%c", &st);

    if (st >= 'A' && st <= 'Z'){
        printf("Uppercase \n");
    }
    
    else if ( st >= 'a' && st <= 'z'){
        printf("Lowercase \n");
    }
    else {
        printf("Not English Letter \n");
    }

    return 0;
}
