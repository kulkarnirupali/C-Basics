#include<stdio.h>

// 1 :print a function to write odd numbers in the given array :
int printarray(int arr[],int n){
    int countodd=0; 
    for(int i=0;i<n;i++){
        if(arr[i] % 2 != 0){
            printf("%d is a odd number \n" ,arr[i]);
            countodd ++;

        }
        }
    return countodd;
}


// 2 : waf to reverse the array .
void reversearray(int arr[],int n){
    for(int i=0; i<n/2; i++){
        int firstvalue = arr[i];
        int lastvalue = arr[n-i-1];
        arr[i] = lastvalue;
        arr[n-i-1] = firstvalue;


    }
}

void printarray1(int arr[],int n){
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d \t" ,arr[i]);

    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    printf("%d \n",printarray(arr,7));
    reversearray(arr,7);
    printarray1(arr,7);
    return 0;
}