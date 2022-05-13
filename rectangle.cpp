///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file rectangle.cpp
/// @version 1.0
///
/// @author Jared Inouye <jinouye7@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "rectangle.h"

rectangle::rectangle(double newLength, double newWidth){
    if(newLength <= 0){
        throw std::invalid_argument("new length must be <=0");
    }
    if(newWidth <= 0){
        throw std::invalid_argument("new Width must be <=0");
    }
    rectangle::length = newLength;
    rectangle::width = newWidth;

}

double rectangle::getLength() const {
    return length;
}

double rectangle::getWidth() const {
    return width;
}

double rectangle::compute_area() {
    double area;
   area = rectangle::length * rectangle::width;
   return area;
}
