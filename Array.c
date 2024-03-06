# include<stdio.h>
// 1 : Give price of 3 ites from user and returns its gst added price :
void array2(float num1,float num2 , float num3){
    float gst1 = (num1 * 0.18) + num1;
    float gst2 = (num2 * 0.18) + num2;
    float gst3 = (num3 * 0.18) + num3;
    printf("gst of prouducts are : %f \n ",gst1);
    printf("gst of prouducts are : %f \n",gst2);
    printf("gst of prouducts are : %f \n ",gst3);
    }


int main(){
    float array1[3];
    printf("Enter price of first product : \n");
    scanf("%f", &array1[0]);

    printf("Enter price of second product : \n");
    scanf("%f", &array1[1]);
    
    printf("Enter price of third product : \n");
    scanf("%f", &array1[2]);

    array2(array1[0],array1[1],array1[2]);
    
    // array intialization :
    float array3[3] = {100,200,300};
    array2(array3[0],array3[1],array3[2]);
    printf("Array executed successfully ."); 
    return 0; 
}