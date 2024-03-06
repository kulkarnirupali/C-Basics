# include<stdio.h>
# include<string.h>




// User defined data type - Strcuture :
struct student_details
{   int Rollno;
    char name[100];
    float marks;
    char emailaddress[100];

};

void function1(struct student_details info){
   printf("Student Information :\n");

   printf("Student marks : %f \n", info.marks);
   
   printf("Student emailaddress : %s \n", info.emailaddress);

   printf("Student Rollno : %d \n", info.Rollno); 

}




int main(){



   // Initailizing Structure :

   struct student_details s1 = {102,"Pallavi",92.90,"pakulks"};
   printf("Student Rollno : %d \n",s1.Rollno);
   

   // pointers to structure :
   struct student_details *ptr= &s1;
   printf("Student Rollno : %d \n",(*ptr).Rollno);
   
    // Arrow operator(->) :

   printf("Student marks with arrow : %f \n", ptr->marks);
   
   printf("Student emailaddress with arrow : %s \n", ptr->emailaddress);

   printf("Student Rollno with arrow : %d \n", ptr->Rollno); 
   
   
   // Passing Structure As a parameter in function :
   struct student_details Information = {103,"Pallivi",92.90,"pakulk"};
   function1(Information);
   

   
   
   


    return 0;
}