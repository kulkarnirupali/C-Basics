# include<stdio.h>

int printlength(char arr[]){
    int count_value=0;
    for (int i=0; arr[i] !=0; i++){
        count_value ++;

    }
    return count_value - 1;
}



int main(){
   
   
   
   
    char arr[20];
    fgets(arr, 20, stdin);
    printf("length is %d",printlength(arr));
    
    return 0;
    }

    

    