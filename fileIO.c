#include<stdio.h>

int main(){
    // opening file using file pointer :
    FILE *fileptr;
    fileptr = fopen("text1.txt","w"); // open file 
    fclose(fileptr);
    
    return 0;
}