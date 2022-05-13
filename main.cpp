#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "square.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    square mySquare(2);
    std::cout << "The area of mySquare is: "
              << mySquare.compute_area()
              << std::endl;
    rectangle myRectangle( 2, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle.compute_area()
              << std::endl;
    return 0;
    return 0;
}
