/********************************************************************\
fracturing.c
Author: Dov Kerbel
Date: 9/5/24
Class: COP 3223, Professor Parra
Purpose: This program calculates the area, circumference, width,
and height of a circle based on given points of the diamater
Input: points
Output: (to the command line) points and calculations
\********************************************************************/

//imports necessary libraries
#include <stdio.h>
#include <math.h>

//Declares a preprocessor directive for PI
#define PI 3.14159


//helper function to calculate distance
double distanceFormula(double x1, double x2, double y1, double y2){
    double formula = sqrt((pow((x2 - x1),2)) + (pow((y2 - y1),2)));
    return formula;
}

//funtion to get input from the user
double askForUserInput(){
    double x1, x2, y1, y2;
    
    //gets point 1 coordinates and prints them
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);

    //gets point 2 coordinates and prints them
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    //prints entered points
    printf("Point #1 entered: x1 = %0.3f; y1 = %0.3f\n", x1, y1);
    printf("Point #2 entered: x2 = %0.3f; y2 = %0.3f\n", x2, y2);

    //excecutes distance formula using given points
    double input = distanceFormula(x1, x2, y1, y2);

    return input;
}

//function to calculate distance for given points (represents a diameter)
double calculateDistance(){
    double distance = askForUserInput();
    printf("The distance between the points is %.3lf\n", distance);
    return distance;
}

//function to calculate the perimeter of the circle given the diaemter
double calculatePerimeter(){ 
    double distance = askForUserInput();
    double perimeter = PI * distance;
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    
    return 2.0;
}

//function to calculate the area of the circle given the diameter
double calculateArea(){ 
    double distance = askForUserInput();
    double radius = (distance)/2;
    double area = PI * radius * radius;
    printf("The area of the city encompassed by your request is %.3lf\n", area);
    
    return 3.0;
}

//function to calculate width of the circle given the diameter
double calculateWidth(){
    double distance = askForUserInput();
    double width = distance;
    printf("The width of the city encompassed by your request is %.3lf\n", width);   
   
    return 1.0;
}

//function to calculate the height of the circle given the diameter
double calculateHeight(){
    double distance = askForUserInput();
    double height = distance;
    printf("The height of the city encompassed by your request is %.3lf\n", height);
    
    return 1.0;
}

//main function that calls other funtions
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}  
