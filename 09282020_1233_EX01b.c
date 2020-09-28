/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double diameter;
    double pi = 3.14159;
    double circumference; 
    
    printf("Enter the diameter of the circle\n");
    scanf("%lf", &diameter);
    
    circumference = pi * diameter;
    
    printf("The circumference of the circle is: %lf", circumference);
    
    return 0;
}
