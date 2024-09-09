//Eduardo Chavez-Marr
//fall-2024-cop-3223-assignment1
//09-08-2024

#include <stdio.h>
#include <math.h>  // For sqrt, pow, fabs functions

#define PI 3.14159

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    
    // Get user input
    printf("Enter x1 and y1 for Point 1: ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Enter x2 and y2 for Point 2: ");
    scanf("%lf %lf", &x2, &y2);
    
    // Calculate the distance using the distance formula
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Output the results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;
}

// Function to calculate the perimeter (circumference) of a circle
double calculatePerimeter() {
    // Call calculateDistance to get the distance (which is the diameter)
    double distance = calculateDistance();
    
    // Perimeter (circumference) of a circle is 2 * PI * radius
    double radius = distance / 2.0;
    double perimeter = 2 * PI * radius;
    
    // Output the result
    printf("The perimeter of the circle is %.2lf\n", perimeter);
    
    return perimeter;
}

// Function to calculate the area of a circle
double calculateArea() {
    // Call calculateDistance to get the distance (which is the diameter)
    double distance = calculateDistance();
    
    // Radius is half the distance
    double radius = distance / 2.0;
    
    // Area of a circle is PI * radius^2
    double area = PI * pow(radius, 2);
    
    // Output the result
    printf("The area of the circle is %.2lf\n", area);
    
    return area;
}

// Function to calculate the width (horizontal distance between two points)
double calculateWidth() {
    double x1, y1, x2, y2;
    
    // Get user input for the two points
    printf("Enter x1 and y1 for Point 1: ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Enter x2 and y2 for Point 2: ");
    scanf("%lf %lf", &x2, &y2);
    
    // Width is simply the horizontal difference in the x coordinates
    double width = fabs(x2 - x1);
    
    // Output the results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    
    return width;
}

// Function to calculate the height (vertical distance between two points)
double calculateHeight() {
    double x1, y1, x2, y2;
    
    // Get user input for the two points
    printf("Enter x1 and y1 for Point 1: ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Enter x2 and y2 for Point 2: ");
    scanf("%lf %lf", &x2, &y2);
    
    // Height is simply the vertical difference in the y coordinates
    double height = fabs(y2 - y1);
    
    // Output the results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    
    return height;
}

// Main function to call all the other functions
int main(void) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}
