#include <stdio.h>

int main() {

    float Radius;

    printf("Enter the Radius of the Circle:");
    scanf("%f" , &Radius);

    float Answer = 3.14 * Radius * Radius;

    printf("The Area of The Circle is: %f" , Answer);
    
    return 0;


}