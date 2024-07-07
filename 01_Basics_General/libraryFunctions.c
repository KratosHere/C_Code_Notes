/*

%d => For Integers!
%f => For Real Values!
%c => For Characters!

All of these are called Format Specifier!!

*/

#include <stdio.h>

int main() {

    int PrintInteger = 23;
    float PrintReal = 42.14;
    char PrintChar = 'c';

    // int TempInt = 4.5; // Not Possible Because 4.5 is not an Integer
    // float TempReal = 3; // Not Possible Because 3 is not a Real Value

    int PrintThisValue = 501;
    printf("This is a Value: %d %d \n" , PrintThisValue , PrintThisValue);

    printf("Integer: %d \n" , PrintInteger);

    printf("Real: %f \n" , PrintReal);
    
    printf("Character: %c \n" , PrintChar);

    return 0;

}