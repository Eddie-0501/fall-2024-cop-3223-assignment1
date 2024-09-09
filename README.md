Fracturing Assignment - COP 3223

Programming Assignment 1: Fracture
Course: COP 3223, Fall 2024
Instructor: Juan Parra
Due Date: September 6th, 2024, before 11:59 PM

Objective

The purpose of this assignment is to help you practice splitting a program into multiple functions, also known as "fracturing" your code. By separating tasks into different functions, you'll learn how to manage code complexity and minimize redundancy using the "DRY" (Don't Repeat Yourself) principle.

This assignment specifically requires you to write a program that performs various geometric calculations on a circle based on user-provided points.

Requirements

You will implement the following functions in a single C file (fracturing.c):

calculateDistance(): Computes the distance between two points.
calculatePerimeter(): Calculates the perimeter (circumference) of a circle using the distance between two points as the diameter.
calculateArea(): Computes the area of the circle.
calculateWidth(): Determines the horizontal distance (width) between two points.
calculateHeight(): Determines the vertical distance (height) between two points.
Special Restrictions:
#define for PI: You must declare a preprocessor directive for PI (3.14159).
No Global Variables: You cannot use global variables.
No File I/O: The program cannot read from or write to files.

Program Interaction

The program will prompt the user for the coordinates of two points. Based on the input, it will compute the following:

The distance between the two points.
The perimeter of a circle, using the distance as the diameter.
The area of the circle.
The width (horizontal distance) between the points.
The height (vertical distance) between the points.
Deliverables

Submit a single source file named fracturing.c via Webcourses. Ensure the file includes all the required functions, along with your name and UCFID as a comment at the top.

Grading Breakdown

calculateWidth() - 10%
calculateHeight() - 10%
calculateDistance() - 20%
calculateArea() - 20%
calculatePerimeter() - 20%
Implementation Details (Code inspection) - 10%
Comments and Style - 10%

General Tips

Use printf() to test and debug your program incrementally.
Ensure that the output matches the expected format (punctuation, capitalization, etc.).
Avoid last-minute submissions. Give yourself time to review and test the program thoroughly.

Example Output

Enter x1 and y1 for Point 1: 2 3
Enter x2 and y2 for Point 2: 5 7
Point #1 entered: x1 = 2.00; y1 = 3.00
Point #2 entered: x2 = 5.00; y2 = 7.00
The distance between the two points is 5.00
The perimeter of the circle is 15.71
The area of the circle is 19.63
The width of the city encompassed by your request is 3.00
The height of the city encompassed by your request is 4.00
