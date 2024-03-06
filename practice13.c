# include<stdio.h>
# include<string.h>
// 1 . Salting of password : take input string from user and return "123" at the end of string as a new password :
void sorting(char str[]){
    char add[]= "123";
    char newpasswaord[200];

    strcpy(newpasswaord, str); 
    strcat(newpasswaord, add);
    puts(newpasswaord);
}


// 2. wtf to create function 'Slice' which take string from user and return sliced string from index n to m :

void slice(char str1[],int n , int m){
    char slicedstr[100];
    int j=0;
    for (int i=n;i<=m;i++,j++){
        slicedstr[j] = str1[i];

    }
   slicedstr[j] = '\0';
   puts(slicedstr);


}

// 3 . WTF to count occurance of vowels in the given string :

int vowels(char str2[]){
    int count=0;
    for (int i=0;str2[i] != '\0';i++){
        if(str2[i] == 'a'|| str2[i] == 'e'|| str2[i] == 'i'|| str2[i] == 'o'|| str2[i] == 'u' ){
        count++;}


    }
    return count; 
} 

// 4 . Check if character is present or not in the given string :

void present(char str3[],char ch){
    for (int i=0;str3[i] != '\0';i++){
        if(str3[i] == ch){
            printf("Character is present \n");
            return;

        }
}   printf("Character is not present \n");
}

int main(){
    char str[100];
    printf("Enter password : \n");
    scanf("%s",str);

    sorting(str);

    char str1[] = "Helloworld!";
    slice(str1,3,6);
    
    
    char str2[] = "Helloworld ! Jay Ganesh !";
    printf("Vowels are : %d",vowels(str2));

    char str3[] = "My name is Tanushka.";
    char chi= 'y';
    printf("\n");
    present(str3,chi);


    return 0;
}