# include<stdio.h>


void printstring(char name[],int n){
    for (int i=0;i<n;i++){
        printf("%c \t",name[i]);
    }
}




int main(){
   char name[] = {'R','U','P','A','L','I','\0'}; // option 1 - To print a string 

   char name1[] = "KULKARNI"; // option 2 - to print a string 
   
   printstring(name,6);
   
   printf("\n");
   
   printstring(name1,8);
   
   printf("\n");
   // other way to print string : ( without giving length of string as a input i.e 'n':)
   for (int i=0; name[i] !='\0';i++){
    printf("%c \t",name[i]);
   }
   
   printf("\n");
   
    for (int i=0; name1[i] !='\0';i++){
    printf("%c \t",name1[i]);
   }
   

   return 0;


   }


