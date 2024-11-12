#include <stdio.h>

int main (){
    int a = 4, b=3; //multiple declaration and initialisation
    float h =6, t=8; //declare the variable first (Here h=6.0000 => Type Promotion)
    float c = h-t; //then use them for declaring another variable
    //c = -2.000000
    int n = 3;
    int z;
    z=b*c; // declaration and then initiasation not initialisation then declaration b*c = z is incorrect
    //z = 3*-2.00000 (int & float = Float so = -6.0000; but as z is an int type so z= -6) => Type conversion & Type demotion
    printf("The value of n is %d \n", n);
    printf("The Remainder of z and a will be %d", z%a); //% is Modulus used for remainder
    return 0;
}