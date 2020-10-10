// Harrison Williams        Date Assigned: 10022020
//
// CSE1233                  Due Date: 10082020
//
// File Name: 10022020_1233_P2_haw189.c
//
/* Program Description: Point and Rectangle - The program requests
coordinates to a square and a point from the user. The program then 
runs a series of if-else and if-else-if statements returning whether
the point lies inside, on, or outside the rectangle.
*/

#include <stdio.h>

int main()
{
    double x;      // lower left x coordinate
   double y;      // lower left y coordinate
   double height;    // height of rectangle
   double width;     // width of rectangle
   double xp;     // x coordinate for point
   double yp;     // y coordinate for point
   
   // user prompt
   
   printf("Enter the x coordinate of the lower left hand corner of the rectangle:\n");
   scanf("%lf", &x);
   
   printf("Enter the y coordinate of the lower left hand corner of the rectangle:\n");
   scanf("%lf", &y);
   
   printf("Enter the width of the rectangle:\n");
   scanf("%lf", &width);
   
   printf("Enter the height of the rectangle:\n");
   scanf("%lf", &height);
   
   printf("Enter the x coordinate of the point:\n");
   scanf("%lf", &xp);
   
   printf("Enter the y coordinate of the point:\n");
   scanf("%lf", &yp);

   // nested multi-branch-if-else

   if (xp >= x && yp >= y) {                                     
      if (xp <= width || yp <= height) {                        
         if (xp > x && yp > y && xp < width && yp < height) {
            printf("The point is in the rectangle\n");
         }
         else if (xp == x || yp == y && xp == width || yp == height) {
            printf("The point is on the rectangle\n");         
         }
         else {
             printf("The point is outside the rectangle");
         }
      }
      else {
          printf("The point is outside the rectangle\n");
      }
   }
   else if (xp < x || yp < y || xp > width || yp > height) {
      printf("The point is outside the rectangle\n");
   }
   else {
      printf("Error, try again.\n");
   }
    return 0;
}
