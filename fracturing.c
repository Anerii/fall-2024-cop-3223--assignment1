// Irena Giraldo 
// COP3223C 
// DATE: 10/08/2024
// ASSIGNMENT 1 FRACTURING


#include <stdio.h> 
#include <math.h>
#define pi 3.14159
// this is to calculate the distance 
double calculateDistance(){
    double distance, x1, x2, y1, y2;
    printf("\nEnter two points\n");
    scanf("%lf %lf", &x1,&y1);
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    scanf("%lf %lf", &x2,&y2);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("The distance between the two points is %lf\n", distance);

    return distance;
}
// calculating the height
double calculateHeight(){
    double distance, height, difficulty;
    distance = calculateDistance();
    height = distance;
    printf("The height of the city encompassed by your request is %lf\n", height);

    printf("Enter the difficulty of this function on a scale from 1.0 to 5.0\n");
    scanf("%lf", &difficulty);

    return difficulty;
}
// calculate width
double calculateWidth(){
    double distance, width, difficulty;
    distance = calculateDistance();
    width = distance;
    printf("The width of the city encompassed by your request is %lf\n", width);

    printf("Enter the difficulty of this function on a scale from 1.0 to 5.0\n");
    scanf("%lf", &difficulty);

    return difficulty;
}
//calculate area
double calculateArea(){
    double distance, radius, area, difficulty;
    distance = calculateDistance();
    radius = distance/2;
    area = (pow(radius, 2))*pi;
    printf("The area of the city encompassed by your request is %lf\n", area);

    printf("Enter the difficulty of this function on a scale from 1.0 to 5.0\n");
    scanf("%lf", &difficulty);

    return difficulty;
}
//calculate perimeter
double calculatePerimeter(){
    double distance, radius, perimeter, difficulty;
    distance = calculateDistance();
    radius = distance/2;
    perimeter = 2*pi*radius;
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    printf("Enter the difficulty of this function on a scale from 1.0 to 5.0\n");
    scanf("%lf", &difficulty);

    return difficulty;
}
// main function where all gets called
int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
// and fin.