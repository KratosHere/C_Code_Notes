#include <stdio.h>

int main() {
    
    int num1 = 24; // This is Type Declaration Instruction , Type Declare ker diya!

    int num2 = 25 , num3 , num4; // Valid!!

    // The Already assigned value should be at the right side , Coz its Being Assigning to the Empty Variables

    num3 = num4 = num2; // Valid!!
    printf("Number1:%d Number2:%d Number3:%d Number:%d \n" , num1 , num2 , num3 , num4);



    
    return 0;
}