#include <stdio.h>
#include <math.h>
#define PI 3.14159

//To find the diameter
double calculateDistance() {
    //So here we ask user inputs
    printf("Enter point #1 x1 and y1:(separate with space) ");
    int x1;
    int y1;
    scanf("%d%d", &x1, &y1);
    printf("Enter point #2 x2 and y2:(separate with space) ");
    int x2;
    int y2;
    scanf("%d%d", &x2, &y2);

    //Here we first add the x's and y's
    //Then square the sum of x's and y's
    //Add sum of each square
    //Sqrt the sum
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    return distance;
}

// To find the perimeter of a circle
double calculatePerimeter(){
    double diameter = calculateDistance();
    double perimeter = PI * diameter;
    return perimeter;
}

// To find the area of the circle
double calculateArea(){
    double radius = calculateDistance()/2;
    double area = PI * pow(radius, 2);
    return area;
}

// To find the width of the circle, same as diameter
double calculateWidth(){
    double width = calculateDistance();
    return width;
}

// To find the height of a circle, same as diameter
double calculateHeight(){
    double height = calculateDistance();
    return height;
}

// Main function where the print statements are located
int main(int argc, char** argv) {

    double distance = calculateDistance();
    printf("The distance between the two points is %lf units\n\n", distance);
    
    double circumference = calculatePerimeter();
    printf("The perimeter of the city encompassed by your request is  %lf units\n\n", circumference);
    
    double area = calculateArea();
    printf("The area of the city encompassed by your request is %lf units\n\n", area);
    
    double width = calculateWidth();
    printf("The width of the city encompassed by your request is %lf units\n\n", width);
    
    double height = calculateHeight();
    printf("The height of the city encompassed by your request is %lf units\n\n", height);

    return 0;
}
