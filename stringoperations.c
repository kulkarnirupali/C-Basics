# include<stdio.h>
# include<string.h> // header file to use string operations :
int main(){
   
   // # 1 . Strlen() - length of a string 
    char arr[] = "Rupali kulkarni";
    printf("length is %d",strlen(arr));
    printf("\n");
    
   // # 2 . strcopy() - copy string
    char string1[] = "Priyanka";
    char string2[] = "P. C.";
    strcpy(string1,string2);
    puts(string1);

    // 3 . strconc - concatinations of two string :
    char string3[] = "Priyanka";
    char string4[] = "  P. C.";
    puts(strcat(string3,string4));

    // 4 . strcomp - two strings comparison takes place (output - 0,positive,negevtive)
    char string5[] = "Priyanka";
    char string6[] = "Nick";
    int put = strcmp(string5,string6); // comparison is done ny (ASC VALUE)
    printf("%d",put);

    return 0;
    }

    
