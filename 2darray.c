# include<stdio.h>

// defining marks of 3 subject of 2 students :
int main(){
    int marks[2][3];
    marks[0][0] = 19;
    marks[0][1] = 17;
    marks[0][2] = 20;
    
    marks[1][0] = 20;
    marks[1][1]= 18;
    marks[1][2]= 17;
    
    printf("%d",marks[1][1]);




    return 0;
}