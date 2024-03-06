# include<stdio.h>
# include<string.h>




// wtf to store information of 3 students using Strcuture data structure :
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
    printf("\n");
    

    struct student_details s2;
    s2.Rollno = 102;
    // s1.name = 'Rupali';
    strcpy(s2.name,"Dipali");
    s2.marks = 90.90;
    strcpy(s2.emailaddress,"kulkarni17@gmail.com");

    printf("Student Rollno : %d \n",s2.Rollno);
    printf("Student name : %s \n",s2.name);
    printf("Student marks : %f \n",s2.marks);
    printf("Student emailaddress : %d \n",s2.emailaddress);
    printf("\n");
    

    struct student_details s3;
    s3.Rollno = 103;
    // s1.name = 'Rupali';
    strcpy(s3.name,"Shubham");
    s2.marks = 91.90;
    strcpy(s2.emailaddress,"kulkarni005@gmail.com");

    printf("Student Rollno : %d \n",s3.Rollno);
    printf("Student name : %s \n",s3.name);
    printf("Student marks : %f \n",s3.marks);
    printf("Student emailaddress : %d \n",s3.emailaddress);








    return 0;
}