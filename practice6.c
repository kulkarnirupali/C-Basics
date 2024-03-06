# include<stdio.h>

void printfunction(){
    printf("Hello World \n");
}


void printfunction2(){
    printf("Good day ! \n");
}


void namaste(){
    printf("Namaste \n");
}

void bonjour(){
    printf("Bonjour \n");
}


int main(){
    printfunction();
    printfunction2();
    printf("please tell us your country name : 'i' for india or 'f' for french : ");
    char country;
    scanf("%c" ,&country);
    if (country =='i'){
        namaste();
    } else {
        bonjour();
    }
    return 0;


}