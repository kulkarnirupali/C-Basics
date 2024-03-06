# include<stdio.h>
# include<string.h>




// User defined data type - Strcuture :
struct student_details
{   int Rollno;
    char name[100];
    float marks;
    char emailaddress[100];

};



int main(){
    struct student_details s1;
    s1.Rollno = 101;
    // s1.name = 'Rupali';
    strcpy(s1.name,"Rupali");
    s1.marks = 89.90;
    strcpy(s1.emailaddress,"rmkulkarni17@gmail.com");

    printf("Student Rollno : %d \n",s1.Rollno);
    printf("Student name : %s \n",s1.name);
    printf("Student marks : %f \n",s1.marks);
    printf("Student emailaddress : %d \n",s1.emailaddress);





    return 0;
}