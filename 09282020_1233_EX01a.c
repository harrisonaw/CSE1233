/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    double xOne;
    double yOne;
    double xTwo;
    double yTwo;
    double slope;
    
    printf("Enter the x coordinate of the first point.\n");
    scanf("%lf", &xOne);
    printf("Enter the y coordinate of the first point.\n");
    scanf("%lf", &yOne);
    
    printf("Enter the x coordinate of the second point.\n");
    scanf("%lf", &xTwo);
    printf("Enter the y coordinate of the second point.\n");
    scanf("%lf", &yTwo);
    
    slope = (yTwo - yOne) / (xTwo - xOne);
    
    printf("%lf", slope);
    
    return 0;
}
