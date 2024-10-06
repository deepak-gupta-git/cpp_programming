#include <iostream>
#include <cmath>

class Shape {
public:
    // Default constructor
    Shape() {}

    // Constructor for circle
    Shape(float radius) {
        area = 3.14159 * radius * radius;
    }

    // Constructor for rectangle
    Shape(float length, float width) {
        area = length * width;
    }

    // Constructor for triangle
    Shape(float base, float height, char triangle) {
        area = 0.5 * base * height;
    }

    // Constructor for square
    Shape(float side, char square) {
        area = side * side;
    }

    // Function to display area
    void displayArea() {
        std::cout << "Area: " << area << std::endl;
    }

private:
    float area;
};

int main() {
    float radius, length, width, base, height, side;

    // Circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    Shape circle(radius);
    std::cout << "Circle ";
    circle.displayArea();

    // Rectangle
    std::cout << "Enter the length and width of the rectangle: ";
    std::cin >> length >> width;
    Shape rectangle(length, width);
    std::cout << "Rectangle ";
    rectangle.displayArea();

    // Triangle
    std::cout << "Enter the base and height of the triangle: ";
    std::cin >> base >> height;
    Shape triangle(base, height, 't');
    std::cout << "Triangle ";
    triangle.displayArea();

    // Square
    std::cout << "Enter the side of the square: ";
    std::cin >> side;
    Shape square(side, 's');
    std::cout << "Square ";
    square.displayArea();

    return 0;
}
