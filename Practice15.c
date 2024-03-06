# include<stdio.h>




// Use of typedef Keyword :
typedef  struct Student_details{   
    int Rollno;
    char name[100];
    float marks;
    char emailaddress[100];

} std ;



int main(){
    std s1 = {1,"Sughndha",99,"Poojasawantoffficail.1234"};
    printf("%d\n",s1.Rollno);
    printf("%s\n",s1.name);
    printf("%s\n",s1.emailaddress);
    
    return 0;
}