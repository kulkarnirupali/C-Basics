# include<stdio.h>

int printlength(char arr[]){
    int count_value=0;
    for (int i=0; arr[i] !=0; i++){
        count_value ++;

    }
    return count_value - 1;
}



int main(){

    char name1[11];
    scanf("%s", name1);  // %s use case , '&' is not used :
    printf(" your name is : %s \n", name1); // print  

    // use of fgets , puts , fgets  etc

    char *canchange="Hello world !"; // if we define string as a pointer we can change its value .
    puts(canchange);
    canchange = "Hello";
    puts(canchange);

    

    char cannotchange[]="Hello World !";
    puts(cannotchange);
    // cannotchange = "HEY World !"; // cant change value of 'array' thing :
    
    char arr[20];
    fgets(arr, 20, stdin);
    printf("length is %d",printlength(arr));

    

    
    return 0;
}