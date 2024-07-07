/*
    
    scanf(VARIABLE TYPE , VARIABLE NAME WITH ADDRESS!!)

    scanf(FormatSpecifier , AddressOfVariable)

    & => Address OF!!

    Variable Type Means What kind of Variable it is like float int YK %f,%d
    And &VARIABLE LOCATION KINDA THING

    
*/

#include <stdio.h>

int main() {

    

    float Num1 , Num2;

    printf("Enter The First Number:");
    scanf("%f" , &Num1);

    printf("Enter The Second Number:");
    scanf("%f" , &Num2);

    printf("The Sum of %f and %f is ===>> %f \n" , Num1 , Num2 , Num1 + Num2);
    
    return 0;
}